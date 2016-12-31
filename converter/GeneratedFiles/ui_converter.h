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
#include <QtWidgets/QLabel>
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
    QComboBox *unitSelector_1;
    QComboBox *unitSelector_2;
    QLineEdit *inputBeforeConversion;
    QLineEdit *inputAfterConversion;
    QComboBox *categorySelector;
    QPushButton *swapValues;
    QPushButton *swapUnits;
    QPushButton *toggleCategoryDetails;
    QLabel *categoryDetails;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAjutor;

    void setupUi(QMainWindow *converterClass)
    {
        if (converterClass->objectName().isEmpty())
            converterClass->setObjectName(QStringLiteral("converterClass"));
        converterClass->resize(606, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(converterClass->sizePolicy().hasHeightForWidth());
        converterClass->setSizePolicy(sizePolicy);
        converterClass->setMinimumSize(QSize(606, 150));
        converterClass->setMaximumSize(QSize(606, 16777215));
        converterClass->setStyleSheet(QStringLiteral(""));
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
        unitSelector_1 = new QComboBox(centralWidget);
        unitSelector_1->setObjectName(QStringLiteral("unitSelector_1"));
        unitSelector_1->setEnabled(true);
        unitSelector_1->setGeometry(QRect(529, 10, 61, 30));
        QFont font;
        font.setFamily(QStringLiteral("Aero Matics"));
        unitSelector_1->setFont(font);
        unitSelector_1->setMouseTracking(false);
        unitSelector_1->setToolTipDuration(1);
        unitSelector_1->setAutoFillBackground(false);
        unitSelector_1->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 0px 5px 0px 5px;\n"
"	font-family: \"Aero Matics\";\n"
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
"    selection-background-color: rgb(220, 220, 220);\n"
""
                        "	selection-color: rgb(0, 0, 0);\n"
"    padding: 0px 3px 3px 3px;\n"
"}\n"
""));
        unitSelector_2 = new QComboBox(centralWidget);
        unitSelector_2->setObjectName(QStringLiteral("unitSelector_2"));
        unitSelector_2->setEnabled(true);
        unitSelector_2->setGeometry(QRect(529, 90, 61, 30));
        unitSelector_2->setFont(font);
        unitSelector_2->setMouseTracking(false);
        unitSelector_2->setToolTipDuration(1);
        unitSelector_2->setAutoFillBackground(false);
        unitSelector_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 0px 5px 0px 5px;\n"
"	font-family: \"Aero Matics\";\n"
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
"    selection-background-color: rgb(220, 220, 220);\n"
""
                        "	selection-color: rgb(0, 0, 0);\n"
"    padding: 0px 3px 3px 3px;\n"
"}\n"
""));
        inputBeforeConversion = new QLineEdit(centralWidget);
        inputBeforeConversion->setObjectName(QStringLiteral("inputBeforeConversion"));
        inputBeforeConversion->setGeometry(QRect(230, 10, 300, 30));
        QPalette palette;
        inputBeforeConversion->setPalette(palette);
        inputBeforeConversion->setStyleSheet(QStringLiteral("font: 17pt \"Aero Matics\";"));
        inputBeforeConversion->setClearButtonEnabled(true);
        inputAfterConversion = new QLineEdit(centralWidget);
        inputAfterConversion->setObjectName(QStringLiteral("inputAfterConversion"));
        inputAfterConversion->setEnabled(true);
        inputAfterConversion->setGeometry(QRect(230, 90, 300, 30));
        inputAfterConversion->setStyleSheet(QLatin1String("font: 17pt \"Aero Matics\";\n"
"\n"
""));
        inputAfterConversion->setReadOnly(true);
        inputAfterConversion->setClearButtonEnabled(false);
        categorySelector = new QComboBox(centralWidget);
        categorySelector->setObjectName(QStringLiteral("categorySelector"));
        categorySelector->setEnabled(true);
        categorySelector->setGeometry(QRect(16, 10, 200, 70));
        categorySelector->setFont(font);
        categorySelector->setMouseTracking(false);
        categorySelector->setToolTipDuration(1);
        categorySelector->setAutoFillBackground(false);
        categorySelector->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 5px 5px 5px 15px;\n"
"	font-family: \"Aero Matics\";\n"
"	font-size: 31px;\n"
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
"    selection-background-color: rgb(220, 220, 220);"
                        "\n"
"    padding: 0px 10px 5px 10px;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
""));
        swapValues = new QPushButton(centralWidget);
        swapValues->setObjectName(QStringLiteral("swapValues"));
        swapValues->setGeometry(QRect(230, 50, 43, 30));
        swapValues->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"	background-image: url(:/converter/Resources/swapValues.png);\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	  background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	background-image: url(:/converter/Resources/swapValues-pressed.png);\n"
"}"));
        swapUnits = new QPushButton(centralWidget);
        swapUnits->setObjectName(QStringLiteral("swapUnits"));
        swapUnits->setGeometry(QRect(540, 50, 40, 30));
        swapUnits->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"	background-image: url(:/converter/Resources/swapUnits.png);\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	background-image: url(:/converter/Resources/swapUnits-pressed.png);\n"
"}"));
        toggleCategoryDetails = new QPushButton(centralWidget);
        toggleCategoryDetails->setObjectName(QStringLiteral("toggleCategoryDetails"));
        toggleCategoryDetails->setGeometry(QRect(15, 90, 200, 30));
        toggleCategoryDetails->setMinimumSize(QSize(160, 0));
        toggleCategoryDetails->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-family: \"Aero Matics\";\n"
"	font-size: 19px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 rgb(255, 255, 255), stop: 1.0 rgb(233, 233, 233));\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-family: \"Aero Matics\";\n"
"	font-size: 19px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 rgb(220, 220, 220), stop: 1.0 rgb(240, 240, 240));\n"
"}\n"
"QPushButton::checked {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-family: \"Aero Matics\";\n"
"	font-size: 19px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 rgb(220, 220, 220), stop: 1.0 rgb(240, 240, 240));\n"
"}"));
        toggleCategoryDetails->setCheckable(true);
        toggleCategoryDetails->setChecked(false);
        categoryDetails = new QLabel(centralWidget);
        categoryDetails->setObjectName(QStringLiteral("categoryDetails"));
        categoryDetails->setGeometry(QRect(15, 130, 575, 30));
        categoryDetails->setStyleSheet(QLatin1String("border: 1px solid darkgrey;\n"
"background-color: rgb(255, 255, 255);\n"
"font-family: \"Aero Matics\";\n"
"font-size: 19px;"));
        categoryDetails->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        converterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(converterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 606, 21));
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
        QObject::connect(actionExit, SIGNAL(triggered()), converterClass, SLOT(close()));

        QMetaObject::connectSlotsByName(converterClass);
    } // setupUi

    void retranslateUi(QMainWindow *converterClass)
    {
        converterClass->setWindowTitle(QApplication::translate("converterClass", "UniConverter", Q_NULLPTR));
        actionSoidfhgbuiaebgae->setText(QApplication::translate("converterClass", "Exit", Q_NULLPTR));
        actionExit->setText(QApplication::translate("converterClass", "Inchide", Q_NULLPTR));
        actionInformatii->setText(QApplication::translate("converterClass", "Informatii", Q_NULLPTR));
        actionAdauga_unitate_de_masura->setText(QApplication::translate("converterClass", "Adauga unitate de masura", Q_NULLPTR));
        inputBeforeConversion->setText(QString());
        swapValues->setText(QString());
        swapUnits->setText(QString());
        toggleCategoryDetails->setText(QApplication::translate("converterClass", "Detalii", Q_NULLPTR));
        categoryDetails->setText(QString());
        menuFile->setTitle(QApplication::translate("converterClass", "File", Q_NULLPTR));
        menuAjutor->setTitle(QApplication::translate("converterClass", "Ajutor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class converterClass: public Ui_converterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_H
