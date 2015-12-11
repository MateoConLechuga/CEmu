#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include <QtGui/QPixmap>

AboutWindow::AboutWindow(QWidget *p) :
    QDialog(p),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    QPixmap pix("C:/icon.ico");
    ui->label->setPixmap(pix);
}

AboutWindow::~AboutWindow()
{
    delete ui;
}

void AboutWindow::on_pushButton_clicked()
{
    this->close();
}
