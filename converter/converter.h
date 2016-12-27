#ifndef CONVERTER_H
#define CONVERTER_H

#include <QtWidgets/QMainWindow>
#include "ui_converter.h"

class converter : public QMainWindow
{
	Q_OBJECT

public:
	converter(QWidget *parent = 0);
	~converter();

private:
	Ui::converterClass ui;
};

#endif // CONVERTER_H
