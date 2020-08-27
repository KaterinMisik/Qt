#include "toolbar.h"
#include "ui_toolbar.h"
#include <QPushButton>
#include <qimagewidget.h>
#include <QObject>
#include <QToolButton>
ToolBar::ToolBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ToolBar)
{
ui->setupUi(this);
ui->rectangleControl->hide();
ui->checkboxControl->hide();
ui->saveControl->hide();

    m_button = new QPushButton("Show", this);

    m_button->setGeometry(QRect(QPoint(300, 0),
                                QSize(150,50)));


   //connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));
}



ToolBar::~ToolBar()
{
    delete ui;
}



QPushButton* ToolBar::getLoadDataBtn() {
    return m_button;
}

bool ToolBar::isSaveBoxEnabled(void)

{


    return ui->saveControl->isChecked();

}

bool ToolBar::isrectanglingEnabled(void)

{

    return ui->RectangleControl->isChecked();
}


bool ToolBar::isRectanglingEnabled(void)

{

return ui->rectangleControl->isChecked();

}
bool ToolBar::isCheckboxingEnabled(void)

{

return ui->checkboxControl->isChecked();
}

bool ToolBar::isCircleEnabled(void)


{

return ui->circleControl->isChecked();
}



bool ToolBar::isTriangleEnabled(void)

{

    return ui->TriangleControl->isChecked();
}
