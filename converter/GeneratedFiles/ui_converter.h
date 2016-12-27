/********************************************************************************
** Form generated from reading UI file 'converter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTER_H
#define UI_CONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_converterClass
{
public:
    QAction *actionSoidfhgbuiaebgae;
    QAction *actionExit;
    QAction *actionInformatii;
    QAction *actionAdauga_unitate_de_masura;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAjutor;

    void setupUi(QMainWindow *converterClass)
    {
        if (converterClass->objectName().isEmpty())
            converterClass->setObjectName(QStringLiteral("converterClass"));
        converterClass->resize(600, 170);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(converterClass->sizePolicy().hasHeightForWidth());
        converterClass->setSizePolicy(sizePolicy);
        converterClass->setMinimumSize(QSize(600, 170));
        converterClass->setMaximumSize(QSize(600, 170));
        actionSoidfhgbuiaebgae = new QAction(converterClass);
        actionSoidfhgbuiaebgae->setObjectName(QStringLiteral("actionSoidfhgbuiaebgae"));
        actionExit = new QAction(converterClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionInformatii = new QAction(converterClass);
        actionInformatii->setObjectName(QStringLiteral("actionInformatii"));
        actionAdauga_unitate_de_masura = new QAction(converterClass);
        actionAdauga_unitate_de_masura->setObjectName(QStringLiteral("actionAdauga_unitate_de_masura"));
        centralWidget = new QWidget(converterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(500, 10, 61, 30));
        QFont font;
        comboBox->setFont(font);
        comboBox->setMouseTracking(false);
        comboBox->setToolTipDuration(1);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 0px solid white;\n"
"	background-color: rgba(255, 255, 255, 0%);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"	border-top-color: white;\n"
"    selection-background-color: #EEEEEE;\n"
"	position: 0px -1px;\n"
"    padding: 1px "
                        "5px 5px 5px;\n"
"	selection-color: #000000;\n"
"}\n"
""));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEnabled(true);
        comboBox_2->setGeometry(QRect(500, 90, 61, 30));
        comboBox_2->setFont(font);
        comboBox_2->setMouseTracking(false);
        comboBox_2->setToolTipDuration(1);
        comboBox_2->setAutoFillBackground(false);
        comboBox_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 0px solid white;\n"
"	background-color: rgba(255, 255, 255, 0%);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"	border-top-color: white;\n"
"    selection-background-color: #EEEEEE;\n"
"	position: 0px -1px;\n"
"    padding: 1px "
                        "5px 5px 5px;\n"
"	selection-color: #000000;\n"
"}\n"
""));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 10, 300, 30));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 90, 300, 30));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setEnabled(true);
        comboBox_3->setGeometry(QRect(10, 30, 161, 61));
        comboBox_3->setFont(font);
        comboBox_3->setMouseTracking(false);
        comboBox_3->setToolTipDuration(1);
        comboBox_3->setAutoFillBackground(false);
        comboBox_3->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 5px 5px 5px 10px;\n"
"	font-size: 25px;\n"
"	selection-color: #000000;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 0px solid white;\n"
"	background-color: rgba(255, 255, 255, 0%);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"	border-top-color: white;\n"
"    selection-background-color: #EEEEEE;\n"
"    padding: 5px 5px 5px 10px;\n"
"	selec"
                        "tion-color: #000000;\n"
"}\n"
""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 50, 40, 30));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	  background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	  background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"}"));
        converterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(converterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAjutor = new QMenu(menuBar);
        menuAjutor->setObjectName(QStringLiteral("menuAjutor"));
        converterClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAjutor->menuAction());
        menuFile->addAction(actionExit);
        menuFile->addAction(actionAdauga_unitate_de_masura);
        menuAjutor->addAction(actionInformatii);

        retranslateUi(converterClass);

        QMetaObject::connectSlotsByName(converterClass);
    } // setupUi

    void retranslateUi(QMainWindow *converterClass)
    {
        converterClass->setWindowTitle(QApplication::translate("converterClass", "UniConverter", Q_NULLPTR));
        actionSoidfhgbuiaebgae->setText(QApplication::translate("converterClass", "Exit", Q_NULLPTR));
        actionExit->setText(QApplication::translate("converterClass", "Inchide", Q_NULLPTR));
        actionInformatii->setText(QApplication::translate("converterClass", "Informatii", Q_NULLPTR));
        actionAdauga_unitate_de_masura->setText(QApplication::translate("converterClass", "Adauga unitate de masura", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("converterClass", "cm", Q_NULLPTR)
         << QApplication::translate("converterClass", "m", Q_NULLPTR)
         << QApplication::translate("converterClass", "nm", Q_NULLPTR)
         << QApplication::translate("converterClass", "km", Q_NULLPTR)
         << QApplication::translate("converterClass", "hm", Q_NULLPTR)
         << QApplication::translate("converterClass", "dm", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("converterClass", "cm", Q_NULLPTR)
         << QApplication::translate("converterClass", "m", Q_NULLPTR)
         << QApplication::translate("converterClass", "nm", Q_NULLPTR)
         << QApplication::translate("converterClass", "km", Q_NULLPTR)
         << QApplication::translate("converterClass", "hm", Q_NULLPTR)
         << QApplication::translate("converterClass", "dm", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("converterClass", "Lungime", Q_NULLPTR)
         << QApplication::translate("converterClass", "Volum", Q_NULLPTR)
         << QApplication::translate("converterClass", "ETC", Q_NULLPTR)
        );
        pushButton->setText(QString());
        menuFile->setTitle(QApplication::translate("converterClass", "File", Q_NULLPTR));
        menuAjutor->setTitle(QApplication::translate("converterClass", "Ajutor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class converterClass: public Ui_converterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_H
