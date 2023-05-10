#include <iostream>
#include <string>
#include "myHeader.h"

void runFunction(void (*func)(), const std::string& name) {
    std::cout << name << "()" << std::endl;
    func();
}