/********************************************************************************
** Form generated from reading UI file 'settingsinformationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSINFORMATIONWIDGET_H
#define UI_SETTINGSINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsInformationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonNetworkMonitor;
    QPushButton *pushButtonBackups;
    QPushButton *pushButtonFile;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutOptions1;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelTitleGeneral;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleClient;
    QLabel *labelInfoClient;
    QHBoxLayout *horizontalAgent;
    QLabel *labelTitleAgent;
    QLabel *labelInfoAgent;
    QHBoxLayout *horizontalBerkely;
    QLabel *labelTitleBerkeley;
    QLabel *labelInfoBerkeley;
    QHBoxLayout *horizontalDataDir;
    QLabel *labelTitleDataDir;
    QLabel *labelInfoDataDir;
    QHBoxLayout *horizontalTime;
    QLabel *labelTitleTime;
    QLabel *labelInfoTime;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelTitleNetwork;
    QHBoxLayout *horizontalName;
    QLabel *labelTitleName;
    QLabel *labelInfoName;
    QHBoxLayout *horizontalConnections;
    QLabel *labelTitleConnections;
    QLabel *labelInfoConnections;
    QWidget *layoutOptions2;
    QHBoxLayout *horizontalMasternodes;
    QLabel *labelTitleMasternodes;
    QLabel *labelInfoMasternodes;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelTitleBlockchain;
    QHBoxLayout *horizontalBlockNumber;
    QLabel *labelTitleBlockNumber;
    QLabel *labelInfoBlockNumber;
    QHBoxLayout *horizontalBlockTime;
    QLabel *labelTitleBlockTime;
    QLabel *labelInfoBlockTime;
    QWidget *layoutOptions3;
    QHBoxLayout *horizontalBlockHash;
    QLabel *labelTitleBlockHash;
    QLabel *labelInfoBlockHash;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelTitleMemory;
    QHBoxLayout *horizontalNumberTransactions;
    QLabel *labelTitleNumberTransactions;
    QLabel *labelInfoNumberTransactions;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsInformationWidget)
    {
        if (SettingsInformationWidget->objectName().isEmpty())
            SettingsInformationWidget->setObjectName(QStringLiteral("SettingsInformationWidget"));
        SettingsInformationWidget->resize(474, 464);
        verticalLayout = new QVBoxLayout(SettingsInformationWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsInformationWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonNetworkMonitor = new QPushButton(groupBox);
        pushButtonNetworkMonitor->setObjectName(QStringLiteral("pushButtonNetworkMonitor"));
        pushButtonNetworkMonitor->setMinimumSize(QSize(120, 40));
        pushButtonNetworkMonitor->setMaximumSize(QSize(16777215, 40));
        pushButtonNetworkMonitor->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(pushButtonNetworkMonitor);

        pushButtonBackups = new QPushButton(groupBox);
        pushButtonBackups->setObjectName(QStringLiteral("pushButtonBackups"));
        pushButtonBackups->setMinimumSize(QSize(120, 40));
        pushButtonBackups->setMaximumSize(QSize(120, 40));
        pushButtonBackups->setFocusPolicy(Qt::NoFocus);
        pushButtonBackups->setCheckable(false);
        pushButtonBackups->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonBackups);

        pushButtonFile = new QPushButton(groupBox);
        pushButtonFile->setObjectName(QStringLiteral("pushButtonFile"));
        pushButtonFile->setMinimumSize(QSize(125, 40));
        pushButtonFile->setMaximumSize(QSize(125, 40));
        pushButtonFile->setFocusPolicy(Qt::NoFocus);
        pushButtonFile->setCheckable(false);
        pushButtonFile->setChecked(false);
        pushButtonFile->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonFile);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        layoutOptions1 = new QWidget(left);
        layoutOptions1->setObjectName(QStringLiteral("layoutOptions1"));
        verticalLayout_9 = new QVBoxLayout(layoutOptions1);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 10);
        labelTitleGeneral = new QLabel(layoutOptions1);
        labelTitleGeneral->setObjectName(QStringLiteral("labelTitleGeneral"));

        verticalLayout_9->addWidget(labelTitleGeneral);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTitleClient = new QLabel(layoutOptions1);
        labelTitleClient->setObjectName(QStringLiteral("labelTitleClient"));
        labelTitleClient->setMinimumSize(QSize(290, 0));
        labelTitleClient->setMaximumSize(QSize(290, 16777215));

        horizontalLayout->addWidget(labelTitleClient);

        labelInfoClient = new QLabel(layoutOptions1);
        labelInfoClient->setObjectName(QStringLiteral("labelInfoClient"));
        labelInfoClient->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoClient->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoClient->setText(QStringLiteral("N/A"));

        horizontalLayout->addWidget(labelInfoClient);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout);

        horizontalAgent = new QHBoxLayout();
        horizontalAgent->setSpacing(0);
        horizontalAgent->setObjectName(QStringLiteral("horizontalAgent"));
        labelTitleAgent = new QLabel(layoutOptions1);
        labelTitleAgent->setObjectName(QStringLiteral("labelTitleAgent"));
        labelTitleAgent->setMinimumSize(QSize(290, 0));
        labelTitleAgent->setMaximumSize(QSize(290, 16777215));

        horizontalAgent->addWidget(labelTitleAgent);

        labelInfoAgent = new QLabel(layoutOptions1);
        labelInfoAgent->setObjectName(QStringLiteral("labelInfoAgent"));
        labelInfoAgent->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoAgent->setText(QStringLiteral("N/A"));

        horizontalAgent->addWidget(labelInfoAgent);

        horizontalAgent->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalAgent);

        horizontalBerkely = new QHBoxLayout();
        horizontalBerkely->setSpacing(0);
        horizontalBerkely->setObjectName(QStringLiteral("horizontalBerkely"));
        labelTitleBerkeley = new QLabel(layoutOptions1);
        labelTitleBerkeley->setObjectName(QStringLiteral("labelTitleBerkeley"));
        labelTitleBerkeley->setMinimumSize(QSize(290, 0));
        labelTitleBerkeley->setMaximumSize(QSize(290, 16777215));

        horizontalBerkely->addWidget(labelTitleBerkeley);

        labelInfoBerkeley = new QLabel(layoutOptions1);
        labelInfoBerkeley->setObjectName(QStringLiteral("labelInfoBerkeley"));
        labelInfoBerkeley->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBerkeley->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBerkeley->setText(QStringLiteral("N/A"));

        horizontalBerkely->addWidget(labelInfoBerkeley);

        horizontalBerkely->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalBerkely);

        horizontalDataDir = new QHBoxLayout();
        horizontalDataDir->setSpacing(0);
        horizontalDataDir->setObjectName(QStringLiteral("horizontalDataDir"));
        labelTitleDataDir = new QLabel(layoutOptions1);
        labelTitleDataDir->setObjectName(QStringLiteral("labelTitleDataDir"));
        labelTitleDataDir->setMinimumSize(QSize(290, 0));
        labelTitleDataDir->setMaximumSize(QSize(290, 16777215));

        horizontalDataDir->addWidget(labelTitleDataDir);

        labelInfoDataDir = new QLabel(layoutOptions1);
        labelInfoDataDir->setObjectName(QStringLiteral("labelInfoDataDir"));
        labelInfoDataDir->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoDataDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoDataDir->setText(QStringLiteral("N/A"));
        labelInfoDataDir->setWordWrap(true);

        horizontalDataDir->addWidget(labelInfoDataDir);

        horizontalDataDir->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalDataDir);

        horizontalTime = new QHBoxLayout();
        horizontalTime->setSpacing(0);
        horizontalTime->setObjectName(QStringLiteral("horizontalTime"));
        labelTitleTime = new QLabel(layoutOptions1);
        labelTitleTime->setObjectName(QStringLiteral("labelTitleTime"));
        labelTitleTime->setMinimumSize(QSize(290, 0));
        labelTitleTime->setMaximumSize(QSize(290, 16777215));

        horizontalTime->addWidget(labelTitleTime);

        labelInfoTime = new QLabel(layoutOptions1);
        labelInfoTime->setObjectName(QStringLiteral("labelInfoTime"));
        labelInfoTime->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoTime->setText(QStringLiteral("N/A"));

        horizontalTime->addWidget(labelInfoTime);

        horizontalTime->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalTime);


        verticalLayout_2->addWidget(layoutOptions1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        labelTitleNetwork = new QLabel(left);
        labelTitleNetwork->setObjectName(QStringLiteral("labelTitleNetwork"));

        verticalLayout_2->addWidget(labelTitleNetwork);

        horizontalName = new QHBoxLayout();
        horizontalName->setSpacing(0);
        horizontalName->setObjectName(QStringLiteral("horizontalName"));
        labelTitleName = new QLabel(left);
        labelTitleName->setObjectName(QStringLiteral("labelTitleName"));
        labelTitleName->setMinimumSize(QSize(290, 0));
        labelTitleName->setMaximumSize(QSize(290, 16777215));

        horizontalName->addWidget(labelTitleName);

        labelInfoName = new QLabel(left);
        labelInfoName->setObjectName(QStringLiteral("labelInfoName"));
        labelInfoName->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoName->setText(QStringLiteral("N/A"));

        horizontalName->addWidget(labelInfoName);

        horizontalName->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalName);

        horizontalConnections = new QHBoxLayout();
        horizontalConnections->setSpacing(0);
        horizontalConnections->setObjectName(QStringLiteral("horizontalConnections"));
        labelTitleConnections = new QLabel(left);
        labelTitleConnections->setObjectName(QStringLiteral("labelTitleConnections"));
        labelTitleConnections->setMinimumSize(QSize(290, 0));
        labelTitleConnections->setMaximumSize(QSize(290, 16777215));

        horizontalConnections->addWidget(labelTitleConnections);

        labelInfoConnections = new QLabel(left);
        labelInfoConnections->setObjectName(QStringLiteral("labelInfoConnections"));
        labelInfoConnections->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoConnections->setText(QStringLiteral("N/A"));

        horizontalConnections->addWidget(labelInfoConnections);

        horizontalConnections->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalConnections);

        layoutOptions2 = new QWidget(left);
        layoutOptions2->setObjectName(QStringLiteral("layoutOptions2"));
        horizontalMasternodes = new QHBoxLayout(layoutOptions2);
        horizontalMasternodes->setSpacing(0);
        horizontalMasternodes->setObjectName(QStringLiteral("horizontalMasternodes"));
        horizontalMasternodes->setContentsMargins(0, 0, 0, 10);
        labelTitleMasternodes = new QLabel(layoutOptions2);
        labelTitleMasternodes->setObjectName(QStringLiteral("labelTitleMasternodes"));
        labelTitleMasternodes->setMinimumSize(QSize(290, 0));
        labelTitleMasternodes->setMaximumSize(QSize(290, 16777215));

        horizontalMasternodes->addWidget(labelTitleMasternodes);

        labelInfoMasternodes = new QLabel(layoutOptions2);
        labelInfoMasternodes->setObjectName(QStringLiteral("labelInfoMasternodes"));
        labelInfoMasternodes->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoMasternodes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoMasternodes->setText(QStringLiteral("N/A"));

        horizontalMasternodes->addWidget(labelInfoMasternodes);

        horizontalMasternodes->setStretch(1, 1);

        verticalLayout_2->addWidget(layoutOptions2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_4);

        labelTitleBlockchain = new QLabel(left);
        labelTitleBlockchain->setObjectName(QStringLiteral("labelTitleBlockchain"));

        verticalLayout_2->addWidget(labelTitleBlockchain);

        horizontalBlockNumber = new QHBoxLayout();
        horizontalBlockNumber->setSpacing(0);
        horizontalBlockNumber->setObjectName(QStringLiteral("horizontalBlockNumber"));
        labelTitleBlockNumber = new QLabel(left);
        labelTitleBlockNumber->setObjectName(QStringLiteral("labelTitleBlockNumber"));
        labelTitleBlockNumber->setMinimumSize(QSize(290, 0));
        labelTitleBlockNumber->setMaximumSize(QSize(290, 16777215));

        horizontalBlockNumber->addWidget(labelTitleBlockNumber);

        labelInfoBlockNumber = new QLabel(left);
        labelInfoBlockNumber->setObjectName(QStringLiteral("labelInfoBlockNumber"));
        labelInfoBlockNumber->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBlockNumber->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBlockNumber->setText(QStringLiteral("N/A"));

        horizontalBlockNumber->addWidget(labelInfoBlockNumber);

        horizontalBlockNumber->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalBlockNumber);

        horizontalBlockTime = new QHBoxLayout();
        horizontalBlockTime->setSpacing(0);
        horizontalBlockTime->setObjectName(QStringLiteral("horizontalBlockTime"));
        labelTitleBlockTime = new QLabel(left);
        labelTitleBlockTime->setObjectName(QStringLiteral("labelTitleBlockTime"));
        labelTitleBlockTime->setMinimumSize(QSize(290, 0));
        labelTitleBlockTime->setMaximumSize(QSize(290, 16777215));

        horizontalBlockTime->addWidget(labelTitleBlockTime);

        labelInfoBlockTime = new QLabel(left);
        labelInfoBlockTime->setObjectName(QStringLiteral("labelInfoBlockTime"));
        labelInfoBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBlockTime->setText(QStringLiteral("N/A"));

        horizontalBlockTime->addWidget(labelInfoBlockTime);

        horizontalBlockTime->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalBlockTime);

        layoutOptions3 = new QWidget(left);
        layoutOptions3->setObjectName(QStringLiteral("layoutOptions3"));
        horizontalBlockHash = new QHBoxLayout(layoutOptions3);
        horizontalBlockHash->setSpacing(0);
        horizontalBlockHash->setObjectName(QStringLiteral("horizontalBlockHash"));
        horizontalBlockHash->setContentsMargins(0, 0, 0, 10);
        labelTitleBlockHash = new QLabel(layoutOptions3);
        labelTitleBlockHash->setObjectName(QStringLiteral("labelTitleBlockHash"));
        labelTitleBlockHash->setMinimumSize(QSize(290, 0));
        labelTitleBlockHash->setMaximumSize(QSize(290, 16777215));

        horizontalBlockHash->addWidget(labelTitleBlockHash);

        labelInfoBlockHash = new QLabel(layoutOptions3);
        labelInfoBlockHash->setObjectName(QStringLiteral("labelInfoBlockHash"));
        labelInfoBlockHash->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBlockHash->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBlockHash->setText(QStringLiteral("N/A"));

        horizontalBlockHash->addWidget(labelInfoBlockHash);

        horizontalBlockHash->setStretch(1, 1);

        verticalLayout_2->addWidget(layoutOptions3);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        labelTitleMemory = new QLabel(left);
        labelTitleMemory->setObjectName(QStringLiteral("labelTitleMemory"));

        verticalLayout_2->addWidget(labelTitleMemory);

        horizontalNumberTransactions = new QHBoxLayout();
        horizontalNumberTransactions->setSpacing(0);
        horizontalNumberTransactions->setObjectName(QStringLiteral("horizontalNumberTransactions"));
        labelTitleNumberTransactions = new QLabel(left);
        labelTitleNumberTransactions->setObjectName(QStringLiteral("labelTitleNumberTransactions"));
        labelTitleNumberTransactions->setMinimumSize(QSize(290, 0));
        labelTitleNumberTransactions->setMaximumSize(QSize(290, 16777215));

        horizontalNumberTransactions->addWidget(labelTitleNumberTransactions);

        labelInfoNumberTransactions = new QLabel(left);
        labelInfoNumberTransactions->setObjectName(QStringLiteral("labelInfoNumberTransactions"));
        labelInfoNumberTransactions->setText(QStringLiteral("N/A"));

        horizontalNumberTransactions->addWidget(labelInfoNumberTransactions);

        horizontalNumberTransactions->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalNumberTransactions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsInformationWidget);

        QMetaObject::connectSlotsByName(SettingsInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsInformationWidget)
    {
        SettingsInformationWidget->setWindowTitle(QApplication::translate("SettingsInformationWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsInformationWidget", "Information", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButtonNetworkMonitor->setText(QApplication::translate("SettingsInformationWidget", "Network Monitor", Q_NULLPTR));
        pushButtonBackups->setText(QApplication::translate("SettingsInformationWidget", "Backups", Q_NULLPTR));
        pushButtonFile->setText(QApplication::translate("SettingsInformationWidget", "Wallet Conf", Q_NULLPTR));
        labelTitleGeneral->setText(QApplication::translate("SettingsInformationWidget", "General", Q_NULLPTR));
        labelTitleClient->setText(QApplication::translate("SettingsInformationWidget", "Client Version:", Q_NULLPTR));
        labelTitleAgent->setText(QApplication::translate("SettingsInformationWidget", "User Agent:", Q_NULLPTR));
        labelTitleBerkeley->setText(QApplication::translate("SettingsInformationWidget", "BerkeleyDB version:", Q_NULLPTR));
        labelTitleDataDir->setText(QApplication::translate("SettingsInformationWidget", "Datadir:", Q_NULLPTR));
        labelTitleTime->setText(QApplication::translate("SettingsInformationWidget", "Startup time:", Q_NULLPTR));
        labelTitleNetwork->setText(QApplication::translate("SettingsInformationWidget", "Network", Q_NULLPTR));
        labelTitleName->setText(QApplication::translate("SettingsInformationWidget", "Name:", Q_NULLPTR));
        labelTitleConnections->setText(QApplication::translate("SettingsInformationWidget", "Connections:", Q_NULLPTR));
        labelTitleMasternodes->setText(QApplication::translate("SettingsInformationWidget", "Number of Masternodes:", Q_NULLPTR));
        labelTitleBlockchain->setText(QApplication::translate("SettingsInformationWidget", "Blockchain", Q_NULLPTR));
        labelTitleBlockNumber->setText(QApplication::translate("SettingsInformationWidget", "Current number of blocks:", Q_NULLPTR));
        labelTitleBlockTime->setText(QApplication::translate("SettingsInformationWidget", "Last block time:", Q_NULLPTR));
        labelTitleBlockHash->setText(QApplication::translate("SettingsInformationWidget", "Last block hash:", Q_NULLPTR));
        labelTitleMemory->setText(QApplication::translate("SettingsInformationWidget", "Memory Pool", Q_NULLPTR));
        labelTitleNumberTransactions->setText(QApplication::translate("SettingsInformationWidget", "Current number of transactions:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsInformationWidget: public Ui_SettingsInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSINFORMATIONWIDGET_H
