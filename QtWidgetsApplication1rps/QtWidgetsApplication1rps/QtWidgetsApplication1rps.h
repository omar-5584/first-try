#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1rps.h"
#include <QApplication>
#include <QPushButton>
#include<QString>
#include <QTableWidget>


class game : public QMainWindow
{
    Q_OBJECT

public:
    game(QWidget *parent = nullptr);
    ~game();

private:
    Ui::QtWidgetsApplication1rpsClass ui;
};

