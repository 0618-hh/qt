#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QWidget>

namespace Ui {
class LogInView;
}

class LogInView : public QWidget
{
    Q_OBJECT

public:
    explicit LogInView(QWidget *parent = nullptr);
    ~LogInView();

private slots:


    void on_btSignIn_clicked();

signals:
    void loginSuccess();
    void loginFailed();
private:
    Ui::LogInView *ui;
};

#endif // LOGINVIEW_H
