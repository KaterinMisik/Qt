#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H


/*
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QResizeEvent>
#include <QGraphicsView>
#include <QMargins>


#include "paintscene.h"



//QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow; }
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QString _noImage;
    QPixmap image;
    QImage  *imageObject;
 //   QGraphicsScene *scene;

   // QPixmap image;
      //  QString _noImageMessage;
        int _margin;
QMargins _margins;
void updateMargins();
public:
    void setPixmap(QPixmap pixmap);
    QPixmap pixmap(){
        return image;
    }
QRect actualImageRect();
    PaintScene *scene;
 //   QTimer *timer;
//void updateMargins();
private:
   // void resizeEvent(QResizeEvent *event);
signals:
      void marginChanged();
protected:
      void paintEvent(QPaintEvent *event);
private slots:
    void slotTimer();
 //   void on_pushButton_clicked();

   // void on_pushButton_2_clicked();
//
    void on_pushButton_3_clicked();


    void on_pushButton_4_pressed();
   // public slots:
   // void zoomIn() { scale(1.2, 1.2); }
   // void zoomOut() { scale(1 / 1.2, 1 / 1.2); }
};
#endif // MAINWINDOW_H
*/
