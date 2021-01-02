/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(549, 827);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setStyleSheet(QLatin1String("*{\n"
"	font-family: Microsoft JhengHei UI;\n"
"	font-size: 24px\n"
"}\n"
"#frame_2\n"
"{\n"
"  background:url(:/image/bg.jpg) \n"
"}\n"
"QFrame#frame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background: red;\n"
"border-radius: 15px;\n"
"color: white\n"
"\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background: #49ebff;\n"
"border-radius: 15px;\n"
"color: #555;\n"
"\n"
"\n"
"}\n"
"QToolButton\n"
"{\n"
"	background: red;\n"
"border-radius: 30px;\n"
"\n"
"}\n"
"QLabel\n"
"{\n"
"	color: white;\n"
"    background: transparent;\n"
"	\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background:rgb(255,0,0,0);\n"
"	border: none;\n"
"	color: #717072;\n"
"	border-bottom: 1px sold #707172;\n"
"\n"
"}"));
        frame = new QFrame(Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(false);
        frame->setGeometry(QRect(10, 50, 471, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(130, 60, 191, 51));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(80, 400, 311, 41));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(100, 330, 321, 31));
        lineEdit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(70, 290, 151, 31));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(80, 180, 151, 31));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(100, 220, 311, 31));
        toolButton = new QToolButton(Form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(190, 10, 91, 91));
        QIcon icon;
        icon.addFile(QStringLiteral("image/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        label->setText(QApplication::translate("Form", "LOGIN HERE", 0));
        pushButton->setText(QApplication::translate("Form", "push botton", 0));
        lineEdit->setPlaceholderText(QApplication::translate("Form", "Password", 0));
        label_2->setText(QApplication::translate("Form", "Password", 0));
        label_3->setText(QApplication::translate("Form", "Username", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("Form", "Username", 0));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
