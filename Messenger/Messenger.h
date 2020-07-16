#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Messenger.h"

class Messenger : public QMainWindow
{
    Q_OBJECT

public:
    Messenger(QWidget *parent = Q_NULLPTR);

private:
    Ui::MessengerClass ui;
};
