#include <QApplication>
#include <QDialog>
#include <QWidget>
#include <QVBoxLayout>
#include "mywidget.h"

int main(int argc, char **argv)
{
  QApplication app(argc, argv);

  QWidget *d = new QWidget;
  d->resize(300, 200);
  d->move(30, 30);

  QVBoxLayout *layout = new QVBoxLayout;
  MyWidget *s = new MyWidget();
  layout->addWidget(s);
  layout->setSpacing(0);
  d->setLayout(layout);

  s->setStyleSheet("MyWidget { background: red; } MyWidget:focus { background: green; }");
  s->installEventFilter(s);
  s->setFocus();
  d->show();

  return app.exec();
}

