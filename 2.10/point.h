#ifndef POINT_H
#define POINT_H
#include <QPainter>

class Point
{
public:
    explicit Point(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void draw(QPainter&, int) const;
    int distance2(const Point&);
    void setX(int);
    void setY(int);
private:
    int x;
    int y;
};

bool operator==(const Point& lhs, const Point& rhs);
#endif // POINT_H
