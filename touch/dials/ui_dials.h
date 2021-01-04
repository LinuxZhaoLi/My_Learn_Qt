/********************************************************************************
** Form generated from reading UI file 'dials.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALS_H
#define UI_DIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dials
{
public:
    QGridLayout *gridLayout;
    QDial *dial_4;
    QDial *dial_6;
    QDial *dial_8;
    QDial *dial_5;
    QDial *dial_3;
    QDial *dial_1;
    QDial *dial_2;
    QDial *dial_7;

    void setupUi(QWidget *Dials)
    {
        if (Dials->objectName().isEmpty())
            Dials->setObjectName(QStringLiteral("Dials"));
        Dials->resize(400, 300);
        gridLayout = new QGridLayout(Dials);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dial_4 = new QDial(Dials);
        dial_4->setObjectName(QStringLiteral("dial_4"));
        dial_4->setNotchesVisible(true);

        gridLayout->addWidget(dial_4, 0, 6, 1, 1);

        dial_6 = new QDial(Dials);
        dial_6->setObjectName(QStringLiteral("dial_6"));
        dial_6->setNotchesVisible(true);

        gridLayout->addWidget(dial_6, 1, 4, 1, 1);

        dial_8 = new QDial(Dials);
        dial_8->setObjectName(QStringLiteral("dial_8"));
        dial_8->setNotchesVisible(true);

        gridLayout->addWidget(dial_8, 1, 6, 1, 1);

        dial_5 = new QDial(Dials);
        dial_5->setObjectName(QStringLiteral("dial_5"));
        dial_5->setNotchesVisible(true);

        gridLayout->addWidget(dial_5, 1, 0, 1, 1);

        dial_3 = new QDial(Dials);
        dial_3->setObjectName(QStringLiteral("dial_3"));
        dial_3->setNotchesVisible(true);

        gridLayout->addWidget(dial_3, 0, 4, 1, 1);

        dial_1 = new QDial(Dials);
        dial_1->setObjectName(QStringLiteral("dial_1"));
        dial_1->setNotchesVisible(true);

        gridLayout->addWidget(dial_1, 0, 3, 1, 1);

        dial_2 = new QDial(Dials);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setStyleSheet(QStringLiteral("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));"));
        dial_2->setNotchesVisible(true);

        gridLayout->addWidget(dial_2, 0, 0, 1, 1);

        dial_7 = new QDial(Dials);
        dial_7->setObjectName(QStringLiteral("dial_7"));
        dial_7->setNotchesVisible(true);

        gridLayout->addWidget(dial_7, 1, 3, 1, 1);


        retranslateUi(Dials);

        QMetaObject::connectSlotsByName(Dials);
    } // setupUi

    void retranslateUi(QWidget *Dials)
    {
        Dials->setWindowTitle(QApplication::translate("Dials", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Dials: public Ui_Dials {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALS_H
