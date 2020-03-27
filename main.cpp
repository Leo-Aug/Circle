#include <iostream>
#include "Circle.h"
#include "Point.h"

int main()
{
    Point p(1, 0);
    Circle c1(0, 0, 3), c2(p, 1);
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cin >> c2;
    std::cout << c1.judge(c2);
    return 0;
}
