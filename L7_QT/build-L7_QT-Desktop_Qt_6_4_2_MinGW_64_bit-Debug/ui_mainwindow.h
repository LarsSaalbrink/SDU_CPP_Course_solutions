/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblName;
    QLineEdit *leName;
    QLabel *lblAddress;
    QLineEdit *leAddress;
    QLabel *lblAddress2;
    QLineEdit *leAddress2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leZipcode;
    QLabel *lblCity;
    QLineEdit *leCity;
    QLabel *lblZipcode;
    QLabel *lblPhone;
    QLineEdit *lePhone;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spcrBtnbar;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        lblName = new QLabel(centralwidget);
        lblName->setObjectName("lblName");

        formLayout->setWidget(0, QFormLayout::LabelRole, lblName);

        leName = new QLineEdit(centralwidget);
        leName->setObjectName("leName");

        formLayout->setWidget(0, QFormLayout::FieldRole, leName);

        lblAddress = new QLabel(centralwidget);
        lblAddress->setObjectName("lblAddress");

        formLayout->setWidget(1, QFormLayout::LabelRole, lblAddress);

        leAddress = new QLineEdit(centralwidget);
        leAddress->setObjectName("leAddress");

        formLayout->setWidget(1, QFormLayout::FieldRole, leAddress);

        lblAddress2 = new QLabel(centralwidget);
        lblAddress2->setObjectName("lblAddress2");

        formLayout->setWidget(2, QFormLayout::LabelRole, lblAddress2);

        leAddress2 = new QLineEdit(centralwidget);
        leAddress2->setObjectName("leAddress2");

        formLayout->setWidget(2, QFormLayout::FieldRole, leAddress2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        leZipcode = new QLineEdit(centralwidget);
        leZipcode->setObjectName("leZipcode");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leZipcode->sizePolicy().hasHeightForWidth());
        leZipcode->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(leZipcode);

        lblCity = new QLabel(centralwidget);
        lblCity->setObjectName("lblCity");
        lblCity->setStyleSheet(QString::fromUtf8("margin-left:2em"));

        horizontalLayout->addWidget(lblCity);

        leCity = new QLineEdit(centralwidget);
        leCity->setObjectName("leCity");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leCity->sizePolicy().hasHeightForWidth());
        leCity->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(leCity);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        lblZipcode = new QLabel(centralwidget);
        lblZipcode->setObjectName("lblZipcode");

        formLayout->setWidget(3, QFormLayout::LabelRole, lblZipcode);

        lblPhone = new QLabel(centralwidget);
        lblPhone->setObjectName("lblPhone");

        formLayout->setWidget(4, QFormLayout::LabelRole, lblPhone);

        lePhone = new QLineEdit(centralwidget);
        lePhone->setObjectName("lePhone");

        formLayout->setWidget(4, QFormLayout::FieldRole, lePhone);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        spcrBtnbar = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spcrBtnbar);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        lblName->setBuddy(leName);
        lblAddress->setBuddy(leAddress);
        lblAddress2->setBuddy(leAddress2);
        lblCity->setBuddy(leCity);
        lblZipcode->setBuddy(leZipcode);
        lblPhone->setBuddy(lePhone);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(leName, leAddress);
        QWidget::setTabOrder(leAddress, leAddress2);
        QWidget::setTabOrder(leAddress2, leZipcode);
        QWidget::setTabOrder(leZipcode, leCity);
        QWidget::setTabOrder(leCity, lePhone);

        retranslateUi(MainWindow);
        QObject::connect(leName, &QLineEdit::returnPressed, leAddress, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(leAddress, &QLineEdit::returnPressed, leAddress2, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(leAddress2, &QLineEdit::returnPressed, leZipcode, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(leName, &QLineEdit::returnPressed, leAddress, qOverload<>(&QLineEdit::selectAll));
        QObject::connect(leAddress, &QLineEdit::returnPressed, leAddress2, qOverload<>(&QLineEdit::selectAll));
        QObject::connect(leAddress2, &QLineEdit::returnPressed, leZipcode, qOverload<>(&QLineEdit::selectAll));
        QObject::connect(leZipcode, &QLineEdit::returnPressed, leCity, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(leZipcode, &QLineEdit::returnPressed, leCity, qOverload<>(&QLineEdit::selectAll));
        QObject::connect(leCity, &QLineEdit::returnPressed, lePhone, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(leCity, &QLineEdit::returnPressed, lePhone, qOverload<>(&QLineEdit::selectAll));
        QObject::connect(lePhone, &QLineEdit::returnPressed, leName, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(lePhone, &QLineEdit::returnPressed, leName, qOverload<>(&QLineEdit::selectAll));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblName->setText(QCoreApplication::translate("MainWindow", "&Navn", nullptr));
        lblAddress->setText(QCoreApplication::translate("MainWindow", "&Adresse", nullptr));
        lblAddress2->setText(QCoreApplication::translate("MainWindow", "Adresse &2", nullptr));
        lblCity->setText(QCoreApplication::translate("MainWindow", "&By", nullptr));
        lblZipcode->setText(QCoreApplication::translate("MainWindow", "Post &nr.", nullptr));
        lblPhone->setText(QCoreApplication::translate("MainWindow", "&Tlf. nr.", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
