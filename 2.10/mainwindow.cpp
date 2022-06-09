#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    point.push_back(Point(event->x(),event->y()));
    Point temp(event->x(),event->y());
    for(int i=0;i<point.size();i++){
        if(point[i].distance2(temp)<=25){
            id=i;
//            point.erase(point.begin()+i);
        }
    }

    repaint();

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    for(int i=0;i<point.size();i++){     // проходит через весь массив
         point[i].draw(painter,i);

    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()==Qt::LeftButton){
        point[id].setX(event->x());
        point[id].setY(event->y());


    }
    repaint();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{

}

