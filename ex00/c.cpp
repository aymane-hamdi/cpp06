#include <iostream>

int main ()
{
    int a = 5;
    char  l = 'c';
    a = static_cast<int>(l);
    std::cout << a;
}