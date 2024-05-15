#ifndef IDK_H
#define IDK_H

#include <QDialog>

namespace Ui {
class idk;
}

class idk : public QDialog
{
    Q_OBJECT

public:
    explicit idk(QWidget *parent = nullptr);
    ~idk();

private:
    Ui::idk *ui;
};

#endif // IDK_H
