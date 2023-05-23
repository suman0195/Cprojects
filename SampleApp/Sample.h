#ifndef SAMPLE_H
#define SAMPLE_H

#include <QColor>
#include <QObject>

class Sample : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor rectangle_color READ getRectangle_color WRITE setRectangle_color NOTIFY rectangle_colorChanged)
public:
    explicit Sample(QObject *parent = nullptr);
    ~Sample();
    const QColor &getRectangle_color() const;
    void setRectangle_color(const QColor &newRectangle_color);

signals:

    void rectangle_colorChanged();

private:
    QColor rectangle_color;
};

#endif // SAMPLE_H
