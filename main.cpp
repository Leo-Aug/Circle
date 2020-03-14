#include <iostream>
#include "Circle.h"
#include "Point.h"

int main()
{
    Point p(1, 0);
    Circle c1(0, 0, 3), c2(p, 1);
    c1.show();
    std::cout << std::endl;
    c2.show();
    std::cout << std::endl;
    std::cout << c1.area() << std::endl;
    if(c1.judge(p))
        std::cout << "The point is on the circle";
    else
        std::cout << "The point is not on the circle";
    return 0;
}
