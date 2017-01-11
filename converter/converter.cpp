#include "converter.h"
#include "adddialog.hpp"

converter::converter(QWidget *parent)
	: QMainWindow(parent)
{
	// initialize tree with data from file
	initTree(&root);

	// build ui
	ui.setupUi(this);

	// initialize widgets with data from tree
	initWidgets(root);
}

void converter::on_actionAddUnit_triggered()
{
	addDialog addUnitDialog;
	addUnitDialog.setWindowIcon(QIcon(MAIN_WINDOW_ICON_PATH));
	addUnitDialog.exec();
}

void converter::on_actionInformatii_triggered()
{
	helpWindow.exec();
}

void converter::initTree(rootNode **root)
{	
	QFile inputFile(INPUT_FILE_NAME);

	if (!inputFile.exists())
	{	// TO DO: throw error
		ui.inputAfterConversion->setText("Error: File not found.");
		inputFile.close();
	}
	else
	{	// read file into tree
		if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
			// TO DO: throw error
			ui.inputAfterConversion->setText("Error: File not found.");
		QTextStream inputTextStream(&inputFile);
		int categoryIter = 0, unitIter = 0;
		categoryNode *currentCategory = nullptr;

		while (!inputTextStream.atEnd())
		{
			QString fileLine = inputTextStream.readLine();
			if (fileLine.startsWith("<") && fileLine.endsWith(">"))
			{
				if (categoryIter > 0)
					(*root)->categories[categoryIter - 1]->numberOfUnits = unitIter;

				unitIter = 0;
				fileLine.remove(0, 1);
				fileLine.remove(fileLine.length() - 1, 1);

				categoryNode *newCategory = new categoryNode;

				newCategory->categoryName = fileLine;
				(*root)->categories[categoryIter++] = newCategory;

				currentCategory = newCategory;
			}
			else
			{
				unitNode *newUnit = new unitNode;
				currentCategory->units[unitIter++] = newUnit;
				QString separator(" / ");

				QString tempData;

				tempData = fileLine.section(separator, 0, 0);
				newUnit->unitNameShort = tempData;

				tempData = fileLine.section(separator, 1, 1);
				newUnit->unitNameLong = tempData;

				tempData = fileLine.section(separator, 2, 2);
				newUnit->conversionFactor = tempData.toFloat();

			}
			currentCategory->numberOfUnits = unitIter;
			(*root)->numberOfCategories = categoryIter;
		}
		inputFile.close();
	}
}

void converter::initWidgets(rootNode *root)
{
	this->setMaximumHeight(150);
	this->setMinimumHeight(150);
	this->resize(606, 150);
	this->setWindowIcon(QIcon(MAIN_WINDOW_ICON_PATH));
	ui.unitSelector_1->clear();
	ui.unitSelector_2->clear();
	int categoryIndex = 0, unitIndex=0;
	while (categoryIndex < root->numberOfCategories)
		ui.categorySelector->insertItem(categoryIndex, root->categories[categoryIndex++]->categoryName);
	categoryNode *tempCategory = root->categories[0];
	while (unitIndex < tempCategory->numberOfUnits)
	{
		ui.unitSelector_1->insertItem(unitIndex, tempCategory->units[unitIndex]->unitNameShort);
		ui.unitSelector_2->insertItem(unitIndex, tempCategory->units[unitIndex++]->unitNameShort);
	}
	helpWindow.setWindowIcon(QIcon(MAIN_WINDOW_ICON_PATH));
	helpWindow.setWindowTitle("Despre UniConverter");
	helpWindow.setStyleSheet("font-size: 17px;");
	helpWindow.setText(u8"<center><b>Informații despre UniConverter.</b></center>");
	helpWindow.setInformativeText(u8"<center><p>UniConverter este un convertor open source între unități de măsură.</p><p>Creat și întreținut de Asanovici Mihai.</p><p>Pagina proiectului: <a href='https://github.com/Asasinovici/UniConverter'>https://github.com/Asasinovici/UniConverter</a></p></center>");
	helpWindow.setStandardButtons(QMessageBox::Ok);
	helpWindow.setDefaultButton(QMessageBox::Ok);
}

void converter::on_categorySelector_activated()
{	// things to do when the user changes category
	int categoryIndex = 0, unitIndex = 0;
	ui.inputBeforeConversion->clear();
	ui.inputAfterConversion->clear();
	ui.unitSelector_1->clear();
	ui.unitSelector_2->clear();

	QString newCategoryName = ui.categorySelector->currentText();

	categoryNode *tempCategory = root->categories[ui.categorySelector->currentIndex()];

	while (unitIndex < tempCategory->numberOfUnits)
	{
		ui.unitSelector_1->insertItem(unitIndex, tempCategory->units[unitIndex]->unitNameShort);
		ui.unitSelector_2->insertItem(unitIndex, tempCategory->units[unitIndex++]->unitNameShort);
	}
	on_toggleCategoryDetails_toggled();
}

void converter::on_inputBeforeConversion_textEdited()
{	//things to do when user inputs values in the first lineedit

	// TO DO: check input so i dont get erros
	using namespace boost::multiprecision;
	std::string inputString = ui.inputBeforeConversion->text().toStdString(), outputString;
	try
	{
		cpp_bin_float_50  input(inputString.c_str());

		if (ui.unitSelector_1->currentIndex() == ui.unitSelector_2->currentIndex())
			ui.inputAfterConversion->setText(QString::fromStdString(inputString));
		else
		{
			cpp_bin_float_50 result("0");
			cpp_bin_float_50  conversionFactorInput(root->categories[ui.categorySelector->currentIndex()]->units[ui.unitSelector_1->currentIndex()]->conversionFactor);
			cpp_bin_float_50  conversionFactorOutput(root->categories[ui.categorySelector->currentIndex()]->units[ui.unitSelector_2->currentIndex()]->conversionFactor);
			result = (input / conversionFactorInput) * conversionFactorOutput;
			outputString = result.str();
			ui.inputAfterConversion->setText(QString::fromStdString(outputString));//.replace("e", " x10^")
		}
		ui.swapValues->setDisabled(false);
	}
	catch (...)
	{
		// TODO: change style on invalid input
		ui.swapValues->setDisabled(true);
		ui.inputAfterConversion->setText(u8"Verificați datele de intrare!");
	}

}

void converter::on_toggleCategoryDetails_toggled()
{
	if (ui.toggleCategoryDetails->isChecked())
	{
		int detailsLabelHeight = 0, i;
		QString categoryDetailsText;
		detailsLabelHeight = root->categories[ui.categorySelector->currentIndex()]->numberOfUnits;
		detailsLabelHeight *= ui.categoryDetails->fontMetrics().height();
		detailsLabelHeight += 10;
		ui.categoryDetails->resize(635, detailsLabelHeight);
		for (i = 0; i < root->categories[ui.categorySelector->currentIndex()]->numberOfUnits; i++)
		{
			categoryDetailsText.append("<b>");
			categoryDetailsText.append(root->categories[ui.categorySelector->currentIndex()]->units[i]->unitNameShort);
			categoryDetailsText.append("</b> = ");
			categoryDetailsText.append(root->categories[ui.categorySelector->currentIndex()]->units[i]->unitNameLong);
			categoryDetailsText.append("<br/>");
		}
		ui.categoryDetails->setText(categoryDetailsText);
		ui.categoryDetails->show();
		this->setMaximumHeight(150 + detailsLabelHeight + 10);
		this->setMinimumHeight(150 + detailsLabelHeight + 10);
		this->resize(661, 150 + detailsLabelHeight + 10);
	}
	else
	{
		ui.categoryDetails->hide();
		this->setMaximumHeight(150);
		this->setMinimumHeight(150);
		this->resize(661, 150);
	}
}

void converter::on_swapValues_pressed()
{	// things to do when the swapValues button is pressed
	QString tempString;
	tempString = ui.inputBeforeConversion->text();
	ui.inputBeforeConversion->setText(ui.inputAfterConversion->text());
	ui.inputAfterConversion->setText(tempString);
}

void converter::on_swapUnits_pressed()
{
	if (ui.unitSelector_1->currentIndex() == ui.unitSelector_2->currentIndex())
		return;
	short int tempIndex;
	tempIndex = ui.unitSelector_1->currentIndex();
	ui.unitSelector_1->setCurrentIndex(ui.unitSelector_2->currentIndex());
	ui.unitSelector_2->setCurrentIndex(tempIndex);
	on_inputBeforeConversion_textEdited();
}

void converter::on_unitSelector_1_activated()
{
	on_inputBeforeConversion_textEdited();
}

void converter::on_unitSelector_2_activated()
{
	on_inputBeforeConversion_textEdited();
}

converter::~converter()
{

}
