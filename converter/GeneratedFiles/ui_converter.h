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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_converterClass
{
public:
    QAction *actionSoidfhgbuiaebgae;
    QAction *actionExit;
    QAction *actionInformatii;
    QAction *actionAddUnit;
    QWidget *centralWidget;
    QComboBox *unitSelector_1;
    QComboBox *unitSelector_2;
    QLineEdit *inputBeforeConversion;
    QLineEdit *inputAfterConversion;
    QComboBox *categorySelector;
    QPushButton *swapValues;
    QPushButton *swapUnits;
    QPushButton *toggleCategoryDetails;
    QTextEdit *categoryDetails;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAjutor;

    void setupUi(QMainWindow *converterClass)
    {
        if (converterClass->objectName().isEmpty())
            converterClass->setObjectName(QStringLiteral("converterClass"));
        converterClass->resize(655, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(converterClass->sizePolicy().hasHeightForWidth());
        converterClass->setSizePolicy(sizePolicy);
        converterClass->setMinimumSize(QSize(655, 150));
        converterClass->setMaximumSize(QSize(658, 16777215));
        converterClass->setStyleSheet(QStringLiteral(""));
        actionSoidfhgbuiaebgae = new QAction(converterClass);
        actionSoidfhgbuiaebgae->setObjectName(QStringLiteral("actionSoidfhgbuiaebgae"));
        actionExit = new QAction(converterClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit->setIconVisibleInMenu(false);
        actionInformatii = new QAction(converterClass);
        actionInformatii->setObjectName(QStringLiteral("actionInformatii"));
        actionInformatii->setIconVisibleInMenu(false);
        actionAddUnit = new QAction(converterClass);
        actionAddUnit->setObjectName(QStringLiteral("actionAddUnit"));
        centralWidget = new QWidget(converterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        unitSelector_1 = new QComboBox(centralWidget);
        unitSelector_1->setObjectName(QStringLiteral("unitSelector_1"));
        unitSelector_1->setEnabled(true);
        unitSelector_1->setGeometry(QRect(559, 10, 86, 30));
        QFont font;
        font.setFamily(QStringLiteral("Forgotten Futurist Rg"));
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        unitSelector_1->setFont(font);
        unitSelector_1->setMouseTracking(false);
        unitSelector_1->setToolTipDuration(1);
        unitSelector_1->setAutoFillBackground(false);
        unitSelector_1->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 0px 5px 0px 5px;\n"
"	font: 15pt \"Forgotten Futurist Rg\";\n"
"	font-weight: bold;\n"
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
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 0px solid white;\n"
"    background-color: rgba(255, 255, 255, 0%);\n"
"	width: 19px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/image/Resources/image/down-arrow-small.png);\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow:on {\n"
"	image: url(:/image/Resources/image/down-arr"
                        "ow-small-inverted.png);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"	border-top-color: white;\n"
"    selection-background-color: rgb(220, 220, 220);\n"
"	selection-color: rgb(0, 0, 0);\n"
"    padding: 0px 3px 3px 3px;\n"
"}\n"
""));
        unitSelector_1->setMaxVisibleItems(11);
        unitSelector_1->setIconSize(QSize(16, 16));
        unitSelector_2 = new QComboBox(centralWidget);
        unitSelector_2->setObjectName(QStringLiteral("unitSelector_2"));
        unitSelector_2->setEnabled(true);
        unitSelector_2->setGeometry(QRect(559, 90, 86, 30));
        unitSelector_2->setFont(font);
        unitSelector_2->setMouseTracking(false);
        unitSelector_2->setToolTipDuration(1);
        unitSelector_2->setAutoFillBackground(false);
        unitSelector_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 0px 5px 0px 5px;\n"
"	font: 15pt \"Forgotten Futurist Rg\";\n"
"	font-weight: bold;\n"
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
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 0px solid white;\n"
"    background-color: rgba(255, 255, 255, 0%);\n"
"	width: 19px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/image/Resources/image/down-arrow-small.png);\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow:on {\n"
"	image: url(:/image/Resources/image/down-arr"
                        "ow-small-inverted.png);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"	border-top-color: white;\n"
"    selection-background-color: rgb(220, 220, 220);\n"
"	selection-color: rgb(0, 0, 0);\n"
"    padding: 0px 3px 3px 3px;\n"
"}\n"
""));
        unitSelector_2->setMaxVisibleItems(11);
        inputBeforeConversion = new QLineEdit(centralWidget);
        inputBeforeConversion->setObjectName(QStringLiteral("inputBeforeConversion"));
        inputBeforeConversion->setGeometry(QRect(250, 10, 310, 30));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(200, 200, 200, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        inputBeforeConversion->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Forgotten Futurist Rg"));
        font1.setPointSize(17);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        inputBeforeConversion->setFont(font1);
        inputBeforeConversion->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 17pt \"Forgotten Futurist Rg\";\n"
"border: 1px solid gray;\n"
"background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(200, 200, 200);\n"
"selection-color: rgb(0, 0, 0);"));
        inputBeforeConversion->setClearButtonEnabled(true);
        inputAfterConversion = new QLineEdit(centralWidget);
        inputAfterConversion->setObjectName(QStringLiteral("inputAfterConversion"));
        inputAfterConversion->setEnabled(true);
        inputAfterConversion->setGeometry(QRect(250, 90, 310, 30));
        inputAfterConversion->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 17pt \"Forgotten Futurist Rg\";\n"
"background-color: rgb(240, 240, 240);\n"
"border: 1px solid gray;\n"
"selection-background-color: rgb(200, 200, 200);\n"
"selection-color: rgb(0, 0, 0);"));
        inputAfterConversion->setReadOnly(true);
        inputAfterConversion->setClearButtonEnabled(false);
        categorySelector = new QComboBox(centralWidget);
        categorySelector->setObjectName(QStringLiteral("categorySelector"));
        categorySelector->setEnabled(true);
        categorySelector->setGeometry(QRect(11, 10, 230, 70));
        QFont font2;
        font2.setFamily(QStringLiteral("Forgotten Futurist Rg"));
        font2.setPointSize(27);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        categorySelector->setFont(font2);
        categorySelector->setMouseTracking(false);
        categorySelector->setToolTipDuration(1);
        categorySelector->setAutoFillBackground(false);
        categorySelector->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    padding: 5px 5px 5px 15px;\n"
"	font: 27pt \"Forgotten Futurist Rg\";\n"
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
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 0px solid white;\n"
"    background-color: rgba(255, 255, 255, 0%);\n"
"	width: 29px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	image: url(:/image/Resources/image/down-arrow-big.png);\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow:on {\n"
"	image: url(:/image/Resources/image/down-arrow-big-inverted.png);\n"
""
                        "}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"	border-top-color: white;\n"
"    selection-background-color: rgb(220, 220, 220);\n"
"    padding: 0px 10px 5px 10px;\n"
"	selection-color: rgb(0, 0, 0);\n"
"}\n"
""));
        categorySelector->setMaxVisibleItems(7);
        swapValues = new QPushButton(centralWidget);
        swapValues->setObjectName(QStringLiteral("swapValues"));
        swapValues->setGeometry(QRect(250, 50, 43, 30));
        swapValues->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"	background-image: url(:/image/Resources/image/swapValues.png);\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	  background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	background-image: url(:/image/Resources/image/swapValues-pressed.png);\n"
"}\n"
"QPushButton::disabled {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"	background-image: url(:/image/R"
                        "esources/image/swapValues-pressed.png);\n"
"}"));
        swapUnits = new QPushButton(centralWidget);
        swapUnits->setObjectName(QStringLiteral("swapUnits"));
        swapUnits->setGeometry(QRect(580, 50, 40, 30));
        swapUnits->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #FFFFFF, stop: 1.0 #E9E9E9);\n"
"	background-image: url(:/image/Resources/image/swapUnits.png);\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 17px;\n"
"	selection-color: #000000;\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E9E9E9, stop: 1.0 #FFFFFF);\n"
"	background-image: url(:/image/Resources/image/swapUnits-pressed.png);\n"
"}"));
        toggleCategoryDetails = new QPushButton(centralWidget);
        toggleCategoryDetails->setObjectName(QStringLiteral("toggleCategoryDetails"));
        toggleCategoryDetails->setGeometry(QRect(10, 90, 230, 30));
        toggleCategoryDetails->setMinimumSize(QSize(160, 0));
        toggleCategoryDetails->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font: 14pt \"Forgotten Futurist Rg\";\n"
"	font-weight: bold;\n"
"	color: rgba(0, 0, 0, 100%);\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 rgb(255, 255, 255), stop: 1.0 rgb(233, 233, 233));\n"
"}\n"
"QPushButton::pressed {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 19px;\n"
"	color: rgba(0, 0, 0, 80%);\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 rgb(220, 220, 220), stop: 1.0 rgb(240, 240, 240));\n"
"}\n"
"QPushButton::checked {\n"
"    border: 1px solid gray;\n"
"    padding: 1px 5px 1px 5px;\n"
"	font-size: 19px;\n"
"	color: rgba(0, 0, 0, 80%);\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 rgb(220, 220, 220), stop: 1.0 rgb(240, 240, 240));\n"
"}"));
        toggleCategoryDetails->setCheckable(true);
        toggleCategoryDetails->setChecked(false);
        categoryDetails = new QTextEdit(centralWidget);
        categoryDetails->setObjectName(QStringLiteral("categoryDetails"));
        categoryDetails->setGeometry(QRect(10, 130, 635, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(categoryDetails->sizePolicy().hasHeightForWidth());
        categoryDetails->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QStringLiteral("Forgotten Futurist Rg"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        font3.setStyleStrategy(QFont::PreferDefault);
        categoryDetails->setFont(font3);
        categoryDetails->setMouseTracking(false);
        categoryDetails->setFocusPolicy(Qt::TabFocus);
        categoryDetails->setStyleSheet(QLatin1String("QScrollBar {\n"
"	background-color: rgb(240, 240, 240);\n"
"    width: 20px;\n"
"}\n"
"QScrollBar::handle {\n"
"	background-color: rgb(200, 200, 200);\n"
"    width: 20px;\n"
"}\n"
"QTextEdit{\n"
"	border: 1px solid darkgrey;\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 15pt \"Forgotten Futurist Rg\";\n"
"	selection-background-color: rgb(200, 200, 200);\n"
"}"));
        categoryDetails->setFrameShape(QFrame::NoFrame);
        categoryDetails->setFrameShadow(QFrame::Plain);
        categoryDetails->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        categoryDetails->setReadOnly(true);
        categoryDetails->setTextInteractionFlags(Qt::TextSelectableByMouse);
        converterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(converterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 655, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAjutor = new QMenu(menuBar);
        menuAjutor->setObjectName(QStringLiteral("menuAjutor"));
        converterClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAjutor->menuAction());
        menuFile->addAction(actionExit);
        menuAjutor->addAction(actionInformatii);

        retranslateUi(converterClass);
        QObject::connect(actionExit, SIGNAL(triggered()), converterClass, SLOT(close()));

        QMetaObject::connectSlotsByName(converterClass);
    } // setupUi

    void retranslateUi(QMainWindow *converterClass)
    {
        converterClass->setWindowTitle(QApplication::translate("converterClass", "UniConverter", Q_NULLPTR));
        actionSoidfhgbuiaebgae->setText(QApplication::translate("converterClass", "Exit", Q_NULLPTR));
        actionExit->setText(QApplication::translate("converterClass", "\303\216nchide", Q_NULLPTR));
        actionInformatii->setText(QApplication::translate("converterClass", "Despre UniConverter", Q_NULLPTR));
        actionAddUnit->setText(QApplication::translate("converterClass", "Adauga unitate de masura", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        unitSelector_1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        unitSelector_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inputBeforeConversion->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        inputBeforeConversion->setText(QString());
#ifndef QT_NO_TOOLTIP
        categorySelector->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        swapValues->setToolTip(QApplication::translate("converterClass", "<html><head/><body><p>Schimba\310\233i valoarea introdus\304\203 cu cea rezultat\304\203.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        swapValues->setText(QString());
#ifndef QT_NO_TOOLTIP
        swapUnits->setToolTip(QApplication::translate("converterClass", "<html><head/><body><p>Shimb\304\203 unit\304\203\310\233ile de m\304\203sur\304\203 \303\256ntre ele.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        swapUnits->setText(QString());
#ifndef QT_NO_TOOLTIP
        toggleCategoryDetails->setToolTip(QApplication::translate("converterClass", "<html><head/><body><p>Arat\304\203 detalii despre unitatea de m\304\203sur\304\203 selectat\304\203.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toggleCategoryDetails->setWhatsThis(QApplication::translate("converterClass", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        toggleCategoryDetails->setText(QApplication::translate("converterClass", "Detalii", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("converterClass", "Fi\310\231ier", Q_NULLPTR));
        menuAjutor->setTitle(QApplication::translate("converterClass", "Ajutor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class converterClass: public Ui_converterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_H
