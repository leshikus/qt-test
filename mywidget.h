#include <QSlider>
#include <QEvent>


class MyWidget: public QSlider
{
  Q_OBJECT

public:
  MyWidget();

protected:

  void focusInEvent(QFocusEvent *e)
  {
    qDebug("focusInEvent");
    QSlider::focusInEvent(e);
  }

  void focusOutEvent(QFocusEvent *e)
  {
    qDebug("focusOutEvent");
    QSlider::focusOutEvent(e);
  }

  bool eventFilter(QObject *obj, QEvent *event)
  {
    qDebug("Got event %d", event->type());
    return QSlider::eventFilter(obj, event);
  }

};

