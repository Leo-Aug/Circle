//
// Created by LiuYang on 2020/3/14.
//

#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H
#include <iostream>
#include "Point.h"


class Circle
{
public:
    Circle(int x_init, int y_init, double r):center(x_init, y_init), radium(r){}
    explicit Circle(Point c = Point(), double r = 0): Circle(c.get_x(), c.get_y(), r){}
    void show()const;
    double area()const{return Pi * pow(radium, 2);}
    bool judge(Point p)const{return center.distance(p) <= radium;}
private:
    Point center;
    double radium;
    static double Pi;
};

double Circle::Pi = 3.14159;

void Circle::show()const
{
    center.show();
    std::cout << "--" << radium << "--";
}


#endif //CIRCLE_CIRCLE_H
