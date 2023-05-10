#include <iostream>
#include "myHeader.h"

void userInputTwo(){
    int num1, num2; 
    try { 
        std::cout << "Enter Num1: ";
        std::cin >> num1; 

        std::cout << "Enter Num2: "; 
        std::cin >> num2;

        if (std::cin.fail()) { 
            throw std::invalid_argument("invalid Input. Enter Integers");
        }
        if (num1 == 7 || num2 == 7){ 
            throw std::invalid_argument("invalid. I do not like the numeber 7");
        }
        std::cout << "The output is:" << num1 * num2 << std::endl;
    } 
    catch(std::invalid_argument& e) { 
        std::cerr << "error_1" << e.what() << std::endl; 
    }
}