#include <iostream>
#include <cstring> 
void fLoopOne(){
    for (int i = 0; i < 5; i++){
        int a = i + 1;
        std::cout << a << std::endl;
    } 
}

void fLoopTwo(){
    for (int i = 0; i < 60; i += 10 ){ 
        std::cout << i << std::endl;
    }
}

int add(int a,int b) { 
    return a + b;
}

void userInputOne(){
    std::string input; 
    std::cout << "Whats your name: ";
    std::cin >> input;  
    std::cout << "your name is" << input << std::endl; 
}

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

void TryCatch(){ 
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

void sayHello(){
    std::cout << "Hello" << std::endl; 
}

int dWhileLoop(char exit_test[]){
    int a = 0; 

    while(a == 0) {
        std::cout << "Enter 0 To Exit                ||Enter 1 To Loop            ||Enter 2 To Run SayHello() \n";
        std::cout << "Enter 3 To Run fLoopOne()      ||Enter 4 To Run fLoopTwo()  ||Enter 5 To Run userInputOne()\n";                                                                                             
        std::cout << "Enter 6 To Run userInputTwo()  ||Enter 7 To Run TryCatch()  ||Enter 8 To Run Add()\n"; 

        std::cin >> exit_test;

        switch(atoi(exit_test)){
            case 0:
                std::cout << "\nExiting\n" << std::endl;
                a = 1;
                break;
            case 1:
                std::cout << "\nPress 0 to exit\n" << std::endl;
                break;
            case 2:
                std::cout << "\nSayHello\n" << std::endl;
                sayHello();
                break;
            case 3:
                std::cout << "\nfLoopOne\n" << std::endl;
                fLoopOne();
                break;
            case 4:
                std::cout << "\nfLoopTwo\n" << std::endl;
                fLoopTwo();
                break;
            case 5:
                std::cout << "\nuserInputOne\n" << std::endl;
                userInputOne();
                break;
            case 6:
                std::cout << "\nuserInputTwo\n" << std::endl;
                userInputTwo();
                break;
            case 7:
                std::cout << "\nTryCatch\n" << std::endl;
                TryCatch();
                break;
            case 8:
                int x, y;
                std::cout << "\nAdd\n" << std::endl;
                std::cout << "Enter Int One\n";
                std::cin >> x;
                std::cout << "Enter Int Two\n";
                std::cin >> y;
                std::cout << add(x, y) << std::endl;
                break;
            default:
                std::cout << "Invalid input\n";
                break;
        }
    }
    return 0;
}


int main(){ 
    char exit_test[10];
    //sayHello();
    //fLoopOne();
    //fLoopTwo();
    //userInputOne();
    //UserInputTwo(); 
    //TryCatch();
    dWhileLoop(exit_test); 
    //std::cout << add(5,3) << std::endl;
    return 0; 
}

