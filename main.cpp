#include <iostream>
#include "ClassA.h"

int main()
{
    ClassA a(3);
    std::cout << a.getA() << std::endl;

    a.setA(5);
    std::cout << a.getA() << std::endl;

    return 0;
}