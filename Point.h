//
// Created by LiuYang on 2020/3/14.
//

#ifndef CIRCLE_POINT_H
#define CIRCLE_POINT_H
#include <iostream>
#include <cmath>


class Point
{
public:
    explicit Point(double x_init = 0, double y_init = 0):x(x_init), y(y_init){}

    void set(double re_x = 0, double re_y = 0){x = re_x; y = re_y;}
    double get_x()const{return x;}
    double get_y()const{return y;}
    double operator-(const Point &p)const{return sqrt(pow(p.x-x, 2) + pow(p.y-y, 2));}
    friend std::ostream &operator<<(std::ostream &os, const Point &P);
    friend std::istream &operator>>(std::istream &is, Point &P);
private:
    double x, y;
};

std::ostream &operator<<(std::ostream &os, const Point &P)
{
    os << '[' << P.x << ", " << P.y << ']';
    return os;
}

std::istream &operator>>(std::istream &is, Point &P)
{
    is >> P.x >> P.y;
    return is;
}

#endif //CIRCLE_POINT_H
