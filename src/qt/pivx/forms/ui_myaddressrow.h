/********************************************************************************
** Form generated from reading UI file 'myaddressrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYADDRESSROW_H
#define UI_MYADDRESSROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyAddressRow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer;
    QLabel *labelDate;
    QLabel *labelAddress;

    void setupUi(QWidget *MyAddressRow)
    {
        if (MyAddressRow->objectName().isEmpty())
            MyAddressRow->setObjectName(QStringLiteral("MyAddressRow"));
        MyAddressRow->resize(400, 60);
        verticalLayout = new QVBoxLayout(MyAddressRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelName = new QLabel(MyAddressRow);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setText(QStringLiteral("Label"));

        horizontalLayout->addWidget(labelName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelDate = new QLabel(MyAddressRow);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setText(QStringLiteral("Date"));

        horizontalLayout->addWidget(labelDate);


        verticalLayout->addLayout(horizontalLayout);

        labelAddress = new QLabel(MyAddressRow);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));
        labelAddress->setText(QStringLiteral("DN6i46dytMPVhV1JMGZFuQBh7BZZ6nNLox"));

        verticalLayout->addWidget(labelAddress);


        retranslateUi(MyAddressRow);

        QMetaObject::connectSlotsByName(MyAddressRow);
    } // setupUi

    void retranslateUi(QWidget *MyAddressRow)
    {
        MyAddressRow->setWindowTitle(QApplication::translate("MyAddressRow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyAddressRow: public Ui_MyAddressRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYADDRESSROW_H
