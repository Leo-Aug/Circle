//
// Created by LiuYang on 2020/3/14.
//

#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H
#include <cmath>
#include <iostream>
#include "Point.h"


class Circle
{
public:
    Circle(double x_init, double y_init, double r):center(x_init, y_init), radium(r){}
    explicit Circle(Point c = Point(), double r = 0): Circle(c.get_x(), c.get_y(), r){}
    friend std::ostream &operator<<(std::ostream &os, const Circle &C);
    friend std::istream &operator>>(std::istream &is, Circle &C);
    double area()const{return Pi * pow(radium, 2);}
    double operator-(const Circle &P)const{return center - P.center;}
    int judge(const Circle &p)const;
private:
    Point center;
    double radium;
    static double Pi;
};

double Circle::Pi = 3.14159;

std::ostream &operator<<(std::ostream &os, const Circle &C)
{
    os << "center: " << C.center << std::endl;
    os << "radium: " << C.radium << std::endl;
    os << "area: " << C.area() << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Circle &C)
{
    is >> C.center >> C.radium;
    return is;
}

int Circle::judge(const Circle &p)const
{
    if(*this - p + (this->radium < p.radium ? *this : p).radium < (this->radium > p.radium ? *this : p).radium)
        return -1;
    else if(*this - p + (this->radium < p.radium ? *this : p).radium == (this->radium > p.radium ? *this : p).radium)
        return 0;
    else
        return radium+p.radium-(*this-p)!=0?
               (int)(fabs(radium+p.radium-(*this-p))/(radium+p.radium-(*this-p))) : 0;
}


#endif //CIRCLE_CIRCLE_H
