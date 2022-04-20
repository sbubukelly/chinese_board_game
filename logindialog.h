#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include<mainwindow.h>
#include <QDialog>


namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_quit_btn_clicked();
    void on_start_btn_clicked();
signals:
    void showmainwindow();
private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
