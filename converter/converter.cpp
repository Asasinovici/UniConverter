#include "converter.h"

converter::converter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	init();
}

void converter::init() 
{	// things to do when when the program is open
	// initialize categorySelector
	// initialize combobox 1 with units
	// initialize combobox 2 with units
	QString item("item");
	ui.unitSelector_1->addItem(item);
}

void converter::on_categorySelector_currentTextChanged(QString newCategoryName)
{	// things to do when the user changes category

	// clear input 1
	// clear input 2
	// update combobox 1 with new units
	// update combobox 2 with new units
	QString s("abc");
	ui.inputAfterConversion->setText(s);
}

void converter::on_inputBeforeConversion_textEdited(QString valueBeforeConversion)
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


converter::~converter()
{

}
