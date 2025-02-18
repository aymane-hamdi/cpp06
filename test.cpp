#include <iostream>


int main() {
    int i = 3;
    const int *a = &i;
    int *modifiablePtr = const_cast<int *>(a);
    *modifiablePtr = 6;

    std::cout << *a << std::endl;

    return 0;
}
