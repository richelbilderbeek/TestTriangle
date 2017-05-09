#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#include "qttesttrianglemenudialog.h"

#include <QDesktopWidget>
#include <QKeyEvent>

#include "testtrianglemenudialog.h"
#include "qtaboutdialog.h"
#include "qttesttrianglemaindialog.h"
#include "qthideandshowdialog.h"


#include "ui_qttesttrianglemenudialog.h"
#pragma GCC diagnostic pop

ribi::QtTestTriangleMenuDialog::QtTestTriangleMenuDialog(QWidget *parent) noexcept :
    QtHideAndShowDialog(parent),
    ui(new Ui::QtTestTriangleMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtTestTriangleMenuDialog::~QtTestTriangleMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtTestTriangleMenuDialog::keyPressEvent(QKeyEvent * event) noexcept
{
  if (event->key() == Qt::Key_Escape) { close(); return; }
}

void ribi::QtTestTriangleMenuDialog::on_button_about_clicked() noexcept
{
  ribi::About a = TestTriangleMenuDialog().GetAbout();
  a.AddLibrary("QtHideAndShowDialog version: " + QtHideAndShowDialog::GetVersion());
  ribi::QtAboutDialog d(a);
  d.setWindowIcon(this->windowIcon());
  d.setStyleSheet(this->styleSheet());
  this->ShowChild(&d);
}

void ribi::QtTestTriangleMenuDialog::on_button_quit_clicked() noexcept
{
  close();
}

void ribi::QtTestTriangleMenuDialog::on_button_start_clicked() noexcept
{
  QtTestTriangleMainDialog d;
  ShowChild(&d);
}
