#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMouseEvent>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPainter>
#include "point.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mousePressEvent(QMouseEvent * event);
    void paintEvent (QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::MainWindow *ui;
    std::vector<Point>point;
    int id=0;
};
#endif // MAINWINDOW_H
