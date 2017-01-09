#ifndef CONVERTER_H
#define CONVERTER_H

#include <QtCore>
#include <QtWidgets/QMainWindow>
#include "ui_converter.h"
#include <QMessagebox>
#include <qfontdatabase.h>
#include <boost/multiprecision/cpp_bin_float.hpp>

#define MAX_CATEGORIES 30
#define MAX_UNITS_PER_CATEGORY 50
#define INPUT_FILE_NAME ":/ConversionTable/Resources/Conversion Table.txt"
#define MAIN_WINDOW_ICON_PATH ":/image/Resources/image/windowIcon.png"

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
	QMessageBox helpWindow;
	int idMainFont = QFontDatabase::addApplicationFont(":/font/Resources/fonts/forgotten futurist rg.ttf");
	int iDmainFontBold = QFontDatabase::addApplicationFont(":/font/Resources/fonts/forgotten futurist bd.ttf");
	~converter();

private slots:
	void on_swapValues_pressed();
	void on_swapUnits_pressed();
	void on_toggleCategoryDetails_toggled();
	void on_categorySelector_activated();
	void on_inputBeforeConversion_textEdited();
	void on_actionInformatii_triggered();
	void on_actionAddUnit_triggered();
	void on_unitSelector_1_activated();
	void on_unitSelector_2_activated();

private:
	Ui::converterClass ui;
};

#endif // CONVERTER_H
