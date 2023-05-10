#include <iostream>

int main(){
    int age1, age2, age3; 
    char gender1; 
    char gender2;
    char gender3;

    char male = 'm';  

    std::cout << "Enter your Age And Gender 'm' Or 'f' ";
    std::cin >> age1 >> gender1; 

    std::cout << "Enter your Age And Gender 'm' Or 'f' ";
    std::cin >> age2 >> gender2; 

    std::cout << "Enter your Age And Gender 'm' Or 'f' ";
    std::cin >> age3 >> gender3; 

    if (gender1 == male && age1 > age2 && age1 > age3) {
        std::cout << "Your a male\nBig Brother 1" << std::endl;
        if(gender2 == male && age2 > age3)
            std::cout << "Your a male\nBig Litte Brother 2" << std::endl;
            if(gender3 == male && age1 > age3)
                std::cout << "Your a male\nBig Litte Brother 2" << std::endl;
            
    }
    else 
        std::cout << "Your a girl\nBig Sister" << std::endl; 

    return 0;   
}

