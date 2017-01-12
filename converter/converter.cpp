#include "converter.h"

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

void converter::on_actionInformatii_triggered()
{
	helpWindow.exec();
}

void converter::initTree(rootNode **root)
{	
	QFile inputFile(INPUT_FILE_NAME);

	if (!inputFile.exists())
	{	
		errorDialog.setText(u8"Fișierul \"Conversion Table.txt\" nu a putut fi găsit.");
		int clickedButton = errorDialog.exec();
		if (clickedButton == QMessageBox::Close)
			this->close();
		inputFile.close();
	}
	else
	{	
		if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
		{
			errorDialog.setText(u8"Fișierul \"Conversion Table.txt\" nu a putut fi deschis.");
			int clickedButton = errorDialog.exec();
			if (clickedButton == QMessageBox::Close)
				this->close();
			inputFile.close();
		}
		else
		{
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
}

void converter::initWidgets(rootNode *root)
{
	errorDialog.setStandardButtons(QMessageBox::Close);
	errorDialog.setDefaultButton(QMessageBox::Close);
	this->setMaximumHeight(150);
	this->setMinimumHeight(150);
	this->resize(606, 150);
	ui.swapValues->setDisabled(true);
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
{	
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
{	
	using namespace boost::multiprecision;
	std::string inputString = ui.inputBeforeConversion->text().toStdString(), outputString;
	try
	{
		cpp_bin_float_50  input(inputString.c_str());


		if (input == 0)
		{
			ui.inputAfterConversion->setText(u8"Introduceți o valoare validă!");
			ui.swapValues->setDisabled(true);
		}
		else
		{
			if (ui.unitSelector_1->currentIndex() == ui.unitSelector_2->currentIndex())
				ui.inputAfterConversion->setText(QString::fromStdString(inputString));
			else
			{
				cpp_bin_float_50 result("0");
				cpp_bin_float_50  conversionFactorInput(root->categories[ui.categorySelector->currentIndex()]->units[ui.unitSelector_1->currentIndex()]->conversionFactor);
				cpp_bin_float_50  conversionFactorOutput(root->categories[ui.categorySelector->currentIndex()]->units[ui.unitSelector_2->currentIndex()]->conversionFactor);
				result = (input / conversionFactorInput) * conversionFactorOutput;
				outputString = result.str(MAX_RESULT_PRECISION);
				ui.inputAfterConversion->setText(QString::fromStdString(outputString));
			}
			ui.swapValues->setDisabled(false);
		}
		ui.inputBeforeConversion->setStyleSheet("color: rgb(0, 0, 0); font: 17pt \"Forgotten Futurist Rg\"; border: 1px solid gray; background-color: rgba(255, 255, 255, 100%); selection-background-color: rgb(200, 200, 200); selection-color: rgb(0, 0, 0); ");
	}
	catch (...)
	{
		ui.swapValues->setDisabled(true);
		ui.inputBeforeConversion->setStyleSheet("color: rgb(0, 0, 0); font: 17pt \"Forgotten Futurist Rg\"; border: 1px solid red; background-color: rgba(255, 190, 190, 30%); selection-background-color: rgb(200, 200, 200); selection-color: rgb(0, 0, 0); ");
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
{	
	QString tempString;
	tempString = ui.inputBeforeConversion->text();
	ui.inputBeforeConversion->setText(ui.inputAfterConversion->text());
	ui.inputAfterConversion->setText(tempString);
	on_inputBeforeConversion_textEdited();
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
