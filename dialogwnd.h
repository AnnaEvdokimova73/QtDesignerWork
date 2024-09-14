#ifndef DIALOGWND_H
#define DIALOGWND_H

#include <QWidget>

namespace Ui {
class DialogWnd;
}

class DialogWnd : public QWidget
{
    Q_OBJECT

public:
    explicit DialogWnd(QWidget *parent = nullptr);
    ~DialogWnd();

private:
    Ui::DialogWnd *ui;
};

#endif // DIALOGWND_H
