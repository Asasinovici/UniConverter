/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QCheckBox *checkBox;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QDialog *addDialog)
    {
        if (addDialog->objectName().isEmpty())
            addDialog->setObjectName(QStringLiteral("addDialog"));
        addDialog->resize(371, 422);
        formLayoutWidget = new QWidget(addDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 351, 401));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(12);
        label_5->setFont(font);
        label_5->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::SpanningRole, horizontalSpacer);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, label_6);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, label_7);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_2);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, label_8);

        checkBox = new QCheckBox(formLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font1);

        formLayout->setWidget(8, QFormLayout::FieldRole, checkBox);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::LabelRole, label);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_3);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(11, QFormLayout::SpanningRole, horizontalSpacer_2);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(12, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(12, QFormLayout::FieldRole, pushButton_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);


        retranslateUi(addDialog);
        QObject::connect(pushButton, SIGNAL(pressed()), addDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(addDialog);
    } // setupUi

    void retranslateUi(QDialog *addDialog)
    {
        addDialog->setWindowTitle(QApplication::translate("addDialog", "addDialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("addDialog", "<html><head/><body><p align=\"center\">Adauga\310\233i o nou\304\203 unitate de m\304\203sur\304\203</p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("addDialog", "Selecta\310\233i o categorie existent\304\203 sau introduce\310\233i numele unei noi categorii.", Q_NULLPTR));
        label_3->setText(QApplication::translate("addDialog", "Denumire scurt\304\203", Q_NULLPTR));
        label_7->setText(QApplication::translate("addDialog", "Exemplu: pentru metru, denumirea scurt\304\203 va fi m.", Q_NULLPTR));
        label_2->setText(QApplication::translate("addDialog", "Denumire lung\304\203", Q_NULLPTR));
        label_8->setText(QApplication::translate("addDialog", "Exemplu: Metru.", Q_NULLPTR));
        checkBox->setText(QApplication::translate("addDialog", "Este unitate de baz\304\203?", Q_NULLPTR));
        label->setText(QApplication::translate("addDialog", "Factor de conversie", Q_NULLPTR));
        label_9->setText(QApplication::translate("addDialog", "Factorul de conversie raportat la unitatea de baz\304\203 \303\256n Sistemul Interna\310\233ional.<br/>Exemplu: dac\304\203 dori\310\233i s\304\203 ad\304\203uga\310\233i centrimetru, factorul de conversie va fi 0.01 deoarece unitatea de baz\304\203 este metrul si are factorul de conversie 1.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addDialog", "Anuleaz\304\203", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addDialog", "Salveaz\304\203 \310\231i \303\256nchide", Q_NULLPTR));
        label_4->setText(QApplication::translate("addDialog", "Categoria", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addDialog: public Ui_addDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
