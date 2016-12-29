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

void converter::initTree(rootNode **root)
{	
	QFile inputFile(INPUT_FILE_NAME);

	if (!inputFile.exists())
	{	// throw error
		ui.inputAfterConversion->setText("Error: File not found.");
		inputFile.close();
	}
	else
	{	// read file into tree
		if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
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
	int categoryIndex = 0, unitIndex=0;
	while (categoryIndex < root->numberOfCategories)
		ui.categorySelector->insertItem(categoryIndex, root->categories[categoryIndex++]->categoryName);
	categoryNode *tempCategory = root->categories[0];
	while (unitIndex < tempCategory->numberOfUnits)
	{
		ui.unitSelector_1->insertItem(unitIndex, tempCategory->units[unitIndex]->unitNameShort);
		ui.unitSelector_2->insertItem(unitIndex, tempCategory->units[unitIndex++]->unitNameShort);
	}
}

void converter::on_categorySelector_currentTextChanged()
{	// things to do when the user changes category
	int categoryIndex = 0, unitIndex = 0;
	ui.inputBeforeConversion->clear();
	ui.inputAfterConversion->clear();

	QString newCategoryName = ui.categorySelector->currentText();

	categoryNode *tempCategory = root->categories[ui.categorySelector->currentIndex()];
	ui.unitSelector_1->clear();
	ui.unitSelector_2->clear();
	while (unitIndex < tempCategory->numberOfUnits)
	{
		ui.unitSelector_1->insertItem(unitIndex, tempCategory->units[unitIndex]->unitNameShort);
		ui.unitSelector_2->insertItem(unitIndex, tempCategory->units[unitIndex++]->unitNameShort);
	}

}

void converter::on_inputBeforeConversion_textEdited()
{	//things to do when user inputs values in the first lineedit
	//ui.inputAfterConversion->setText(valueBeforeConversion);
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
}


converter::~converter()
{

}
