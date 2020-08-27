#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QWidget>
#include <QPushButton>

#include <QObject>
namespace Ui {
class ToolBar;
}

class ToolBar : public QWidget
{
    Q_OBJECT

public:
    explicit ToolBar(QWidget *parent = nullptr);
    ~ToolBar();
    bool isRectanglingEnabled();
    bool isCheckboxingEnabled();
    bool isrectanglingEnabled();
    bool isCircleEnabled();
    bool isTriangleEnabled();


    bool isSaveBoxEnabled();

    bool isUploadEnabled();


    QPushButton *getLoadDataBtn();
private:
    QPushButton *m_button;




signals:
void UpdatePoints(QString filepathupload);
private:
    Ui::ToolBar *ui;
};

#endif // TOOLBAR_H




