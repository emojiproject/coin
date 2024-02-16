/********************************************************************************
** Form generated from reading UI file 'topbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBAR_H
#define UI_TOPBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/expandablebutton.h"
#include "qt/pivx/pfborderimage.h"
#include "qt/pivx/privatelabel.h"

QT_BEGIN_NAMESPACE

class Ui_TopBar
{
public:
    QVBoxLayout *verticalLayout_10;
    PFBorderImage *containerTop;
    QVBoxLayout *verticalLayout_11;
    QWidget *top_container_2;
    QHBoxLayout *top_container;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widgetAmount;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitle1;
    PrivateQLabel *labelAmountPiv;
    QWidget *widgetTopAmount;
    QHBoxLayout *horizontalLayout_5;
    PrivateQLabel *labelAmountTopPiv;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutSync;
    QVBoxLayout *verticalLayout_9;
    ExpandableButton *pushButtonSync;
    ExpandableButton *pushButtonHDUpgrade;
    ExpandableButton *pushButtonStack;
    ExpandableButton *pushButtonConf;
    ExpandableButton *pushButtonMasternodes;
    ExpandableButton *pushButtonConsole;
    ExpandableButton *pushButtonConnection;
    ExpandableButton *pushButtonTor;
    ExpandableButton *pushButtonLock;
    ExpandableButton *pushButtonTheme;
    ExpandableButton *pushButtonFAQ;
    ExpandableButton *pushButtonPrivacy;
    QWidget *bottom_container;
    QHBoxLayout *botton_container;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelTitle5;
    PrivateQLabel *labelAvailablePiv;
    QLabel *labelTitle4;
    PrivateQLabel *labelImmaturePiv;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle6;
    PrivateQLabel *labelLockedPiv;
    QLabel *labelTitle3;
    PrivateQLabel *labelPendingPiv;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widgetStaking;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelNetworkHashRateTitle;
    QLabel *labelNetworkHashRateValue;
    QLabel *labelWalletHashRateTitle;
    PrivateQLabel *labelWalletHashRateValue;
    QWidget *widgetMasternodes;
    QVBoxLayout *vboxLayout;
    QLabel *labelMasternodesTitle;
    PrivateQLabel *labelMasternodeCount;
    QLabel *labelCollateralTitle;
    QLabel *labelCollateralValue;
    QWidget *widgetNextCollateral;
    QVBoxLayout *verticalLayout_121;
    QLabel *labelNextMasternodesTitle;
    QLabel *labelNextCollateralValue;
    QLabel *labelRemainingBlocks;
    QLabel *labelNextCollateralBlocks;
    QWidget *qrContainer;
    QVBoxLayout *containerQR;
    QPushButton *btnQr;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonQR;

    void setupUi(QWidget *TopBar)
    {
        if (TopBar->objectName().isEmpty())
            TopBar->setObjectName(QStringLiteral("TopBar"));
        TopBar->resize(838, 200);
        TopBar->setMinimumSize(QSize(0, 200));
        TopBar->setMaximumSize(QSize(16777215, 200));
        verticalLayout_10 = new QVBoxLayout(TopBar);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        containerTop = new PFBorderImage(TopBar);
        containerTop->setObjectName(QStringLiteral("containerTop"));
        verticalLayout_11 = new QVBoxLayout(containerTop);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        top_container_2 = new QWidget(containerTop);
        top_container_2->setObjectName(QStringLiteral("top_container_2"));
        top_container_2->setMinimumSize(QSize(0, 65));
        top_container = new QHBoxLayout(top_container_2);
        top_container->setSpacing(0);
        top_container->setObjectName(QStringLiteral("top_container"));
        top_container->setContentsMargins(10, 0, 10, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        widgetAmount = new QWidget(top_container_2);
        widgetAmount->setObjectName(QStringLiteral("widgetAmount"));
        verticalLayout_2 = new QVBoxLayout(widgetAmount);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 8, 0, 0);
        labelTitle1 = new QLabel(widgetAmount);
        labelTitle1->setObjectName(QStringLiteral("labelTitle1"));

        verticalLayout_2->addWidget(labelTitle1);

        labelAmountPiv = new PrivateQLabel(widgetAmount);
        labelAmountPiv->setObjectName(QStringLiteral("labelAmountPiv"));
        labelAmountPiv->setText(QStringLiteral("-- EMOJ"));

        verticalLayout_2->addWidget(labelAmountPiv);


        horizontalLayout_4->addWidget(widgetAmount);

        widgetTopAmount = new QWidget(top_container_2);
        widgetTopAmount->setObjectName(QStringLiteral("widgetTopAmount"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTopAmount->sizePolicy().hasHeightForWidth());
        widgetTopAmount->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(widgetTopAmount);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelAmountTopPiv = new PrivateQLabel(widgetTopAmount);
        labelAmountTopPiv->setObjectName(QStringLiteral("labelAmountTopPiv"));
        labelAmountTopPiv->setMinimumSize(QSize(0, 36));
        labelAmountTopPiv->setStyleSheet(QStringLiteral("padding:0px;margin:0px;"));
        labelAmountTopPiv->setText(QStringLiteral("-- EMOJ"));

        horizontalLayout_5->addWidget(labelAmountTopPiv, 0, Qt::AlignTop);


        horizontalLayout_4->addWidget(widgetTopAmount, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        layoutSync = new QWidget(top_container_2);
        layoutSync->setObjectName(QStringLiteral("layoutSync"));
        layoutSync->setMinimumSize(QSize(0, 36));
        layoutSync->setMaximumSize(QSize(16777215, 36));
        verticalLayout_9 = new QVBoxLayout(layoutSync);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButtonSync = new ExpandableButton(layoutSync);
        pushButtonSync->setObjectName(QStringLiteral("pushButtonSync"));
        pushButtonSync->setMinimumSize(QSize(36, 36));
        pushButtonSync->setMaximumSize(QSize(16777215, 36));

        verticalLayout_9->addWidget(pushButtonSync);


        horizontalLayout_4->addWidget(layoutSync, 0, Qt::AlignRight);

        pushButtonHDUpgrade = new ExpandableButton(top_container_2);
        pushButtonHDUpgrade->setObjectName(QStringLiteral("pushButtonHDUpgrade"));
        pushButtonHDUpgrade->setMinimumSize(QSize(36, 36));
        pushButtonHDUpgrade->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonHDUpgrade);

        pushButtonStack = new ExpandableButton(top_container_2);
        pushButtonStack->setObjectName(QStringLiteral("pushButtonStack"));
        pushButtonStack->setMinimumSize(QSize(36, 36));
        pushButtonStack->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonStack);

        pushButtonConf = new ExpandableButton(top_container_2);
        pushButtonConf->setObjectName(QStringLiteral("pushButtonConf"));
        pushButtonConf->setMinimumSize(QSize(36, 36));
        pushButtonConf->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonConf);

        pushButtonMasternodes = new ExpandableButton(top_container_2);
        pushButtonMasternodes->setObjectName(QStringLiteral("pushButtonMasternodes"));
        pushButtonMasternodes->setMinimumSize(QSize(36, 36));
        pushButtonMasternodes->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonMasternodes);

        pushButtonConsole = new ExpandableButton(top_container_2);
        pushButtonConsole->setObjectName(QStringLiteral("pushButtonConsole"));
        pushButtonConsole->setMinimumSize(QSize(36, 36));
        pushButtonConsole->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonConsole);

        pushButtonConnection = new ExpandableButton(top_container_2);
        pushButtonConnection->setObjectName(QStringLiteral("pushButtonConnection"));
        pushButtonConnection->setMinimumSize(QSize(36, 36));
        pushButtonConnection->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonConnection);

        pushButtonTor = new ExpandableButton(top_container_2);
        pushButtonTor->setObjectName(QStringLiteral("pushButtonTor"));
        pushButtonTor->setMinimumSize(QSize(36, 36));
        pushButtonTor->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonTor);

        pushButtonLock = new ExpandableButton(top_container_2);
        pushButtonLock->setObjectName(QStringLiteral("pushButtonLock"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonLock->sizePolicy().hasHeightForWidth());
        pushButtonLock->setSizePolicy(sizePolicy1);
        pushButtonLock->setMinimumSize(QSize(36, 0));
        pushButtonLock->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonLock);

        pushButtonTheme = new ExpandableButton(top_container_2);
        pushButtonTheme->setObjectName(QStringLiteral("pushButtonTheme"));
        pushButtonTheme->setMinimumSize(QSize(36, 36));
        pushButtonTheme->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonTheme);

        pushButtonFAQ = new ExpandableButton(top_container_2);
        pushButtonFAQ->setObjectName(QStringLiteral("pushButtonFAQ"));
        pushButtonFAQ->setMinimumSize(QSize(36, 36));
        pushButtonFAQ->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonFAQ);

        pushButtonPrivacy = new ExpandableButton(top_container_2);
        pushButtonPrivacy->setObjectName(QStringLiteral("pushButtonPrivacy"));
        pushButtonPrivacy->setMinimumSize(QSize(36, 36));
        pushButtonPrivacy->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonPrivacy);


        top_container->addLayout(horizontalLayout_4);


        verticalLayout_11->addWidget(top_container_2);

        bottom_container = new QWidget(containerTop);
        bottom_container->setObjectName(QStringLiteral("bottom_container"));
        bottom_container->setMinimumSize(QSize(0, 135));
        botton_container = new QHBoxLayout(bottom_container);
        botton_container->setObjectName(QStringLiteral("botton_container"));
        botton_container->setContentsMargins(10, 0, 10, 10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 9);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelTitle5 = new QLabel(bottom_container);
        labelTitle5->setObjectName(QStringLiteral("labelTitle5"));

        verticalLayout_6->addWidget(labelTitle5);

        labelAvailablePiv = new PrivateQLabel(bottom_container);
        labelAvailablePiv->setObjectName(QStringLiteral("labelAvailablePiv"));

        verticalLayout_6->addWidget(labelAvailablePiv);

        labelTitle4 = new QLabel(bottom_container);
        labelTitle4->setObjectName(QStringLiteral("labelTitle4"));

        verticalLayout_6->addWidget(labelTitle4);

        labelImmaturePiv = new PrivateQLabel(bottom_container);
        labelImmaturePiv->setObjectName(QStringLiteral("labelImmaturePiv"));
        labelImmaturePiv->setText(QStringLiteral("- EMOJ"));

        verticalLayout_6->addWidget(labelImmaturePiv);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(32, -1, -1, -1);
        labelTitle6 = new QLabel(bottom_container);
        labelTitle6->setObjectName(QStringLiteral("labelTitle6"));

        verticalLayout_8->addWidget(labelTitle6);

        labelLockedPiv = new PrivateQLabel(bottom_container);
        labelLockedPiv->setObjectName(QStringLiteral("labelLockedPiv"));

        verticalLayout_8->addWidget(labelLockedPiv);

        labelTitle3 = new QLabel(bottom_container);
        labelTitle3->setObjectName(QStringLiteral("labelTitle3"));

        verticalLayout_8->addWidget(labelTitle3);

        labelPendingPiv = new PrivateQLabel(bottom_container);
        labelPendingPiv->setObjectName(QStringLiteral("labelPendingPiv"));
        labelPendingPiv->setText(QStringLiteral("-- EMOJ"));

        verticalLayout_8->addWidget(labelPendingPiv);


        horizontalLayout_2->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_7);


        botton_container->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        botton_container->addItem(horizontalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 0, 9);
        widgetStaking = new QWidget(bottom_container);
        widgetStaking->setObjectName(QStringLiteral("widgetStaking"));
        verticalLayout_12 = new QVBoxLayout(widgetStaking);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(32, 0, 0, 0);
        labelNetworkHashRateTitle = new QLabel(widgetStaking);
        labelNetworkHashRateTitle->setObjectName(QStringLiteral("labelNetworkHashRateTitle"));
        labelNetworkHashRateTitle->setTextFormat(Qt::AutoText);
        labelNetworkHashRateTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_12->addWidget(labelNetworkHashRateTitle);

        labelNetworkHashRateValue = new QLabel(widgetStaking);
        labelNetworkHashRateValue->setObjectName(QStringLiteral("labelNetworkHashRateValue"));
        labelNetworkHashRateValue->setLayoutDirection(Qt::LeftToRight);
        labelNetworkHashRateValue->setTextFormat(Qt::AutoText);
        labelNetworkHashRateValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_12->addWidget(labelNetworkHashRateValue);

        labelWalletHashRateTitle = new QLabel(widgetStaking);
        labelWalletHashRateTitle->setObjectName(QStringLiteral("labelWalletHashRateTitle"));
        labelWalletHashRateTitle->setTextFormat(Qt::AutoText);
        labelWalletHashRateTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_12->addWidget(labelWalletHashRateTitle);

        labelWalletHashRateValue = new PrivateQLabel(widgetStaking);
        labelWalletHashRateValue->setObjectName(QStringLiteral("labelWalletHashRateValue"));
        labelWalletHashRateValue->setText(QStringLiteral("-- H/s"));
        labelWalletHashRateValue->setTextFormat(Qt::AutoText);
        labelWalletHashRateValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_12->addWidget(labelWalletHashRateValue);


        horizontalLayout_6->addWidget(widgetStaking);

        widgetMasternodes = new QWidget(bottom_container);
        widgetMasternodes->setObjectName(QStringLiteral("widgetMasternodes"));
        vboxLayout = new QVBoxLayout(widgetMasternodes);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(32, 0, 0, 0);
        labelMasternodesTitle = new QLabel(widgetMasternodes);
        labelMasternodesTitle->setObjectName(QStringLiteral("labelMasternodesTitle"));

        vboxLayout->addWidget(labelMasternodesTitle);

        labelMasternodeCount = new PrivateQLabel(widgetMasternodes);
        labelMasternodeCount->setObjectName(QStringLiteral("labelMasternodeCount"));

        vboxLayout->addWidget(labelMasternodeCount);

        labelCollateralTitle = new QLabel(widgetMasternodes);
        labelCollateralTitle->setObjectName(QStringLiteral("labelCollateralTitle"));

        vboxLayout->addWidget(labelCollateralTitle);

        labelCollateralValue = new QLabel(widgetMasternodes);
        labelCollateralValue->setObjectName(QStringLiteral("labelCollateralValue"));
        labelCollateralValue->setText(QStringLiteral("-- EMOJ"));

        vboxLayout->addWidget(labelCollateralValue);


        horizontalLayout_6->addWidget(widgetMasternodes);

        widgetNextCollateral = new QWidget(bottom_container);
        widgetNextCollateral->setObjectName(QStringLiteral("widgetNextCollateral"));
        verticalLayout_121 = new QVBoxLayout(widgetNextCollateral);
        verticalLayout_121->setObjectName(QStringLiteral("verticalLayout_121"));
        verticalLayout_121->setContentsMargins(32, 0, 0, 0);
        labelNextMasternodesTitle = new QLabel(widgetNextCollateral);
        labelNextMasternodesTitle->setObjectName(QStringLiteral("labelNextMasternodesTitle"));
        labelNextMasternodesTitle->setTextFormat(Qt::AutoText);
        labelNextMasternodesTitle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_121->addWidget(labelNextMasternodesTitle);

        labelNextCollateralValue = new QLabel(widgetNextCollateral);
        labelNextCollateralValue->setObjectName(QStringLiteral("labelNextCollateralValue"));
        labelNextCollateralValue->setTextFormat(Qt::AutoText);
        labelNextCollateralValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_121->addWidget(labelNextCollateralValue);

        labelRemainingBlocks = new QLabel(widgetNextCollateral);
        labelRemainingBlocks->setObjectName(QStringLiteral("labelRemainingBlocks"));
        labelRemainingBlocks->setTextFormat(Qt::AutoText);
        labelRemainingBlocks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_121->addWidget(labelRemainingBlocks);

        labelNextCollateralBlocks = new QLabel(widgetNextCollateral);
        labelNextCollateralBlocks->setObjectName(QStringLiteral("labelNextCollateralBlocks"));
        labelNextCollateralBlocks->setText(QStringLiteral("-- Blocks"));
        labelNextCollateralBlocks->setTextFormat(Qt::AutoText);
        labelNextCollateralBlocks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_121->addWidget(labelNextCollateralBlocks);


        horizontalLayout_6->addWidget(widgetNextCollateral);


        botton_container->addLayout(horizontalLayout_6);

        qrContainer = new QWidget(bottom_container);
        qrContainer->setObjectName(QStringLiteral("qrContainer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qrContainer->sizePolicy().hasHeightForWidth());
        qrContainer->setSizePolicy(sizePolicy2);
        qrContainer->setMinimumSize(QSize(90, 110));
        qrContainer->setMaximumSize(QSize(90, 110));
        containerQR = new QVBoxLayout(qrContainer);
        containerQR->setSpacing(0);
        containerQR->setObjectName(QStringLiteral("containerQR"));
        containerQR->setContentsMargins(5, 10, 5, 0);
        btnQr = new QPushButton(qrContainer);
        btnQr->setObjectName(QStringLiteral("btnQr"));
        btnQr->setMinimumSize(QSize(70, 70));
        btnQr->setMaximumSize(QSize(16777215, 70));
        btnQr->setFocusPolicy(Qt::NoFocus);
        btnQr->setIconSize(QSize(70, 70));

        containerQR->addWidget(btnQr);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        containerQR->addItem(verticalSpacer);

        pushButtonQR = new QPushButton(qrContainer);
        pushButtonQR->setObjectName(QStringLiteral("pushButtonQR"));
        pushButtonQR->setMinimumSize(QSize(36, 36));
        pushButtonQR->setMaximumSize(QSize(36, 36));
        pushButtonQR->setFocusPolicy(Qt::NoFocus);

        containerQR->addWidget(pushButtonQR, 0, Qt::AlignHCenter|Qt::AlignBottom);


        botton_container->addWidget(qrContainer);


        verticalLayout_11->addWidget(bottom_container);


        verticalLayout_10->addWidget(containerTop);


        retranslateUi(TopBar);

        QMetaObject::connectSlotsByName(TopBar);
    } // setupUi

    void retranslateUi(QWidget *TopBar)
    {
        TopBar->setWindowTitle(QApplication::translate("TopBar", "Form", Q_NULLPTR));
        labelTitle1->setText(QApplication::translate("TopBar", "Total", Q_NULLPTR));
        labelTitle5->setText(QApplication::translate("TopBar", "Available", Q_NULLPTR));
        labelAvailablePiv->setText(QApplication::translate("TopBar", "-- EMOJ", Q_NULLPTR));
        labelTitle4->setText(QApplication::translate("TopBar", "Immature", Q_NULLPTR));
        labelTitle6->setText(QApplication::translate("TopBar", "Locked", Q_NULLPTR));
        labelLockedPiv->setText(QApplication::translate("TopBar", "- EMOJ", Q_NULLPTR));
        labelTitle3->setText(QApplication::translate("TopBar", "Pending", Q_NULLPTR));
        labelNetworkHashRateTitle->setText(QApplication::translate("TopBar", "Total Hash Rate", Q_NULLPTR));
        labelNetworkHashRateValue->setText(QApplication::translate("TopBar", "-- H/s", Q_NULLPTR));
        labelWalletHashRateTitle->setText(QApplication::translate("TopBar", "Wallet Hash Rate", Q_NULLPTR));
        labelMasternodesTitle->setText(QApplication::translate("TopBar", "Masternodes", Q_NULLPTR));
        labelMasternodeCount->setText(QApplication::translate("TopBar", "-/-", Q_NULLPTR));
        labelCollateralTitle->setText(QApplication::translate("TopBar", "Collateral", Q_NULLPTR));
        labelNextMasternodesTitle->setText(QApplication::translate("TopBar", "Next Collateral", Q_NULLPTR));
        labelNextCollateralValue->setText(QApplication::translate("TopBar", "-- EMOJ", Q_NULLPTR));
        labelRemainingBlocks->setText(QApplication::translate("TopBar", "In", Q_NULLPTR));
        btnQr->setText(QString());
        pushButtonQR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TopBar: public Ui_TopBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBAR_H
