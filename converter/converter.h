#ifndef CONVERTER_H
#define CONVERTER_H

#include <QtCore>
#include <QtWidgets/QMainWindow>
#include "ui_converter.h"

#define MAX_CATEGORIES 30
#define MAX_UNITS_PER_CATEGORY 50
#define INPUT_FILE_NAME "Resources/Conversion Table.txt"

struct unitNode {
	QString unitNameShort;
	QString unitNameLong;
	float conversionFactor;
};

struct categoryNode {
	int numberOfUnits = 0;
	QString categoryName;
	unitNode *units[MAX_UNITS_PER_CATEGORY];
};

struct rootNode {
	int numberOfCategories = 0;
	categoryNode *categories[MAX_CATEGORIES];
};


//##################################################################
class converter : public QMainWindow
{
	Q_OBJECT

public:
	converter(QWidget *parent = 0);
	rootNode *root = new rootNode;
	void initTree(rootNode **root);
	void initWidgets(rootNode *root);
	~converter();

private slots:
	void on_swapValues_pressed();
	void on_swapUnits_pressed();
	void on_toggleCategoryDetails_toggled();
	void on_categorySelector_currentTextChanged();
	void on_inputBeforeConversion_textEdited();
	//void on_inputAfterConversion_textEdited();

private:
	Ui::converterClass ui;
};

#endif // CONVERTER_H
