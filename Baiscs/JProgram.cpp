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
    int choice;
    
    
    do {
    std::cout << "\n\n\n\n\n                                               sayHello()\n\n\n\n\n\n";




    std::cout << "                                              Enter 0 To Exit\n";

    std::cout << "                                              Enter 1 To SayHello\n";

    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                             Version 0.1";
                  
    std::cin >> choice;
        
        switch (choice) {
            case 1:
    std::cout << "\n\n\n\n\n                                               sayHello()\n\n\n\n\n\n\n\n\n\n";
    std::cout << "                                                 Hello\n";
    std::cout << "                                         Press any key to continue...\n\n\n\n\n\n\n\n";
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                             Version 0.1";
                std::cin.ignore();
                std::cin.get();
                break;
            case 0:
    std::cout << "                                              Exiting sayHello()\n";
                break;
            default:
    std::cout << "                                      Invalid choice. Please try again.\n";
                break;
        }
        
    } while (choice != 0); 
}

int dWhileLoop(char exit_test[]){
    int a = 0; 

    while(a == 0) {
        std::cout << "\n\n\n\n\n    _____        _______     "                                                                                << std::endl;
        std::cout << "   |     \\      |       \\    "                                                                              << std::endl;
        std::cout << "    \\$$$$$      | $$$$$$$\\  ______    ______    ______    ______    ______   ______ ____  "                 << std::endl;
        std::cout << "      | $$      | $$__/ $$ /      \\  /      \\  /      \\  /      \\  |      \\ |      \\    \\ "            << std::endl;
        std::cout << " __   | $$      | $$    $$|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\  \\$$$$$$\\| $$$$$$\\$$$$\\ "          << std::endl;
        std::cout << "|  \\  | $$      | $$$$$$$ | $$   \\$$| $$  | $$| $$  | $$| $$   \\$$ /      $$| $$ | $$ | $$"                << std::endl;
        std::cout << "| $$__| $$      | $$      | $$      | $$__/ $$| $$__| $$| $$      |  $$$$$$$| $$ | $$ | $$"                   << std::endl;
        std::cout << " \\$$    $$      | $$      | $$       \\$$    $$ \\$$    $$| $$       \\$$    $$| $$ | $$ | $$"               << std::endl;
        std::cout << "  \\$$$$$$        \\$$       \\$$        \\$$$$$$  _\\$$$$$$$ \\$$        \\$$$$$$$ \\$$  \\$$  \\$$"         << std::endl;
        std::cout << "                                              |  \\__| $$                                 "                   << std::endl;
        std::cout << "                                               \\$$    $$                                 "                   << std::endl;
        std::cout << "                                                \\$$$$$$                                  "                   << std::endl;
 
      
      
            
        
        std::cout << "\n\n\n\n\n\n                                        Enter 0 To Exit\n";

        std::cout << "\n                                        Enter 1 To SayHello\n";

        std::cout << "\n                                        Enter 2 To View Math Files\n";

        std::cout << "\n                                        Enter 3 To See Fun Math Stuff\n\n\n\n\n\n\n\n";


        std::cout << "\n                                                                                             Version 0.1";


        std::cin >> exit_test;

        switch(atoi(exit_test)){
            case 0:
                std::cout << "\nExiting\n" << std::endl;
                a = 1;
                break;
            case 1:
                sayHello();
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

