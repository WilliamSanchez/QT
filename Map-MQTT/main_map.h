#ifndef MAIN_MAP_H
#define MAIN_MAP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class main_map; }
QT_END_NAMESPACE

class main_map : public QMainWindow
{
    Q_OBJECT

public:
    main_map(QWidget *parent = nullptr);
    ~main_map();

private:
    Ui::main_map *ui;
};
#endif // MAIN_MAP_H
