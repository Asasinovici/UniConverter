#ifndef CONVERTER_H
#define CONVERTER_H

#include <QtWidgets/QMainWindow>
#include <QtUiTools>
#include "ui_converter.h"

class converter : public QMainWindow
{
	Q_OBJECT

public:
	converter(QWidget *parent = 0);
	void init();
	~converter();

private slots:
	void on_swapValues_pressed();
	void on_categorySelector_currentTextChanged(QString newCategoryName);
	void on_inputBeforeConversion_textEdited(QString valueBeforeConversion);
	//void on_inputAfterConversion_textEdited(QString valueBeforeConversion);

private:
	Ui::converterClass ui;
};

#endif // CONVERTER_H
