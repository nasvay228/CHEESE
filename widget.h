#ifndef WIDGET_H
#define WIDGET_H

#include <QTimer>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTimer timer;

public slots:
    void move();
    void back();
};
#endif // WIDGET_H
