#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowTitle("象棋");

}

LoginDialog::~LoginDialog()
{
    delete ui;
}


void LoginDialog::on_quit_btn_clicked()
{
    this->hide();
}

void LoginDialog::on_start_btn_clicked()
{
    this->hide();
    emit showmainwindow();
}
