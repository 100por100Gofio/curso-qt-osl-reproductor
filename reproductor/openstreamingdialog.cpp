#include "openstreamingdialog.h"
#include "ui_openstreamingdialog.h"

openStreamingDialog::openStreamingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openStreamingDialog)
{
    ui->setupUi(this);
}

openStreamingDialog::~openStreamingDialog()
{
    delete ui;
}
