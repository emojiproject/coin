// Copyright (c) 2017-2019 The EMOJI developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZEMOJCONTROLDIALOG_H
#define ZEMOJCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zemoj/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZEmojControlDialog;
}

class CZEmojControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZEmojControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZEmojControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZEmojControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZEmojControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZEmojControlDialog(QWidget *parent);
    ~ZEmojControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZEmojControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZEmojControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZEMOJCONTROLDIALOG_H
