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
    explicit Point(int x_init = 0, int y_init = 0):x(x_init), y(y_init){}
    Point operator+(const Point &A)const;
    Point operator-(const Point &A)const;
    void set(int re_x = 0, int re_y = 0){x = re_x; y = re_y;}
    int get_x()const{return x;}
    int get_y()const{return y;}
    double distance(Point p)const{return sqrt(pow(p.x-x, 2) + pow(p.x-x, 2));}
    void show()const{std::cout << '(' << x << ',' << y << ')';}
private:
    int x, y;
};

Point Point::operator+(const Point &A)const
{
    Point tmp(x, y);
    tmp.x += A.x;
    tmp.y += A.y;
    return tmp;
}

Point Point::operator-(const Point &A)const
{
    Point tmp(x, y);
    tmp.x -= A.x;
    tmp.y -= A.y;
    return tmp;
}


#endif //CIRCLE_POINT_H
