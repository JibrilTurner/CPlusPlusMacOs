#include "myFunctions.h"
#include <iostream>

int main() {
    int a = 5, b = 10;
    int result = sum(a, b);
    std::cout << "The sum of " << a << " and " << b << " is " << result << std::endl;

    // Wait for user input before closing console window
    std::cin.get();

    return 0;
}