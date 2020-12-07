// Copyright (c) 2019 The EMOJI developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLEMOJWIDGET_H
#define COINCONTROLEMOJWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlEmojWidget;
}

class CoinControlEmojWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlEmojWidget(QWidget *parent = nullptr);
    ~CoinControlEmojWidget();

private:
    Ui::CoinControlEmojWidget *ui;
};

#endif // COINCONTROLEMOJWIDGET_H
