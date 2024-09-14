#include "dialogwnd.h"
#include "ui_dialogwnd.h"

DialogWnd::DialogWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogWnd)
{
    ui->setupUi(this);
    setWindowTitle("Диалоговое окно");
}

DialogWnd::~DialogWnd()
{
    delete ui;
}
