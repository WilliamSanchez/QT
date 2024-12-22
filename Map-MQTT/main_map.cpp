#include "main_map.h"
#include "ui_main_map.h"

main_map::main_map(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::main_map)
{
    ui->setupUi(this);
}

main_map::~main_map()
{
    delete ui;
}

