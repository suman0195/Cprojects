#include "Sample.h"

Sample::Sample(QObject *parent)
    : QObject{parent}
{
    rectangle_color="blue";
}

Sample::~Sample()
{

}

const QColor &Sample::getRectangle_color() const
{
    return rectangle_color;
}

void Sample::setRectangle_color(const QColor &newRectangle_color)
{
    if (rectangle_color == newRectangle_color)
        return;
    rectangle_color = newRectangle_color;
    emit rectangle_colorChanged();
}
