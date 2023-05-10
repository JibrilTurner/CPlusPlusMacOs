#include <iostream>
#include "myHeader.h"

void tryCatch(){ 
    int x, y;
    
    try {
        std::cout << "Enter two integers: ";
        std::cin >> x >> y;
        
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter two integers.");
        }
        
        if (y == 0 || x == 0) {
            throw std::runtime_error("Division by zero not allowed.");
        }
        
        std::cout << "The result of division is: " << x / y << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cerr << "ErrorOne: " << e.what() << std::endl;
    }
    catch (std::runtime_error& e) {
        std::cerr << "ErrorTwo: " << e.what() << std::endl;
    }
}

// switch (choice) {
//     case 1:
//         try {
//             // code that may throw an exception
//         }
//         catch (exception_type e) {
//             // exception handling code
//         }
//         break;
//     // other cases
// }
