#include "loginview.h"
#include "ui_loginview.h"
#include "idatabase.h"
LogInView::LogInView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogInView)
{
    ui->setupUi(this);
}

LogInView::~LogInView()
{
    delete ui;
}

void LogInView::on_btSignIn_clicked()
{
    //QString status=IDatabase::getInstance().userLogin(ui->inputUserName->text(),ui->inputUserPassword->text());
    //if(status=="loginOk")
    emit loginSuccess();

}

