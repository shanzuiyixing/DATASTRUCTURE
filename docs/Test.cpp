#include <iostream>

int main()
{
    int* a;
    int b = 50;
    a = &b;
    std::cout << a << " " << &a << " " << *a << " " << b << " " << &b <<std::endl;
}