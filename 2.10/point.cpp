#include "point.h"


Point::Point(int x, int y): x(x), y(y)
{
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::draw(QPainter& painter, int i) const
{
    painter.drawLine(x-i, y,   x+i, y);
    painter.drawLine(x, y-i,   x, y+i);
}

int Point::distance2(const Point& point)
{
    return (point.getX() - x) * (point.getX() - x) + (point.getY() - y) * (point.getY() - y);
}

bool operator==(const Point& lhs, const Point& rhs) {
    return lhs.getX() == rhs.getY() && lhs.getY() && rhs.getY();
}
