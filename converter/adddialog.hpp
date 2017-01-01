#pragma once
#ifndef ADDDIALOG_HPP
#define ADDDIALOG_HPP
#include <QDialog>
#include "ui_adddialog.h"

class addDialog : public QDialog {
	Q_OBJECT

public:
	addDialog(QWidget * parent = Q_NULLPTR);
	~addDialog();

private:
	Ui::addDialog ui;
};

#endif // ADDDIALOG_HPP