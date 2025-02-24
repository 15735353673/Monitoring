#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_first_qtd.h"

class first_QTd : public QMainWindow
{
    Q_OBJECT

public:
    first_QTd(QWidget *parent = nullptr);
    ~first_QTd();

private:
    Ui::first_QTdClass ui;
};
