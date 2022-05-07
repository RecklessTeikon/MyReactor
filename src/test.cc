#include <iostream>

int add(int &a, int &b)
{
    return a + b;
}

int main()
{
    int a = 4, b = 3;
    std::cout << "a + b = " << add(a, b) << std::endl;
    return 0;
}