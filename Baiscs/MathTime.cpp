#include <iostream>
#include <cstring> 

std::string differentiate(int base, int exponent){ 
    if (exponent == base){
        return "0";
    } 
    else {
        int result = exponent * base; 
        exponent = exponent - 1; 
        if(base < 0 || exponent < 0) {
            result =  -result; 
            std::string str_result = std ::to_string(std::abs(result));
            str_result = "-" + str_result; 
            return str_result + "x^" + std::to_string(std::abs(result)); 
        } 
        
        else {
            std::string str_result = std::to_string(std::abs(result)); 
            return str_result + "x^" + std::to_string(std::abs(exponent));
        }
    }
}

void test_differenitate() { 
    std::pair<int ,int> input;


}