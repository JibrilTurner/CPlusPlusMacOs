#include <iostream>
#include <string>
#include "helpFunc.h"

int main() {
    int a = 5;
    int b = 10;

    helpFunc::swap(&a, &b);  // Call the swap function from the helpFunc namespace

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}
