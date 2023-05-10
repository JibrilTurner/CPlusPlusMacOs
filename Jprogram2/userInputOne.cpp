#include <iostream>
#include "myHeader.h"

void userInputOne(){
    std::string input; 
    std::cout << "Whats your name: ";
    std::cin >> input;  
    std::cout << "your name is " << input << std::endl; 
}