#include <iostream>
#include "myHeader.h"

void tmpd() {
    int choice;
    do {
        // Print the menu options
        std::cout << "                                          1. NULL \n\n";
        std::cout << "                                          2. NULL \n\n";
        std::cout << "                                          3. NULL \n\n";
        std::cout << "                                          4. NULL \n\n";
        std::cout << "                                          5. NULL \n\n";

        std::cout << "                                          0. Exit\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << "                                          Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        line();
        runFunction(fLoopOne, "fLoopOne");
        break;
      case 2:
        line();
        runFunction(sayHello, "sayHello");
        break;
      case 3:
        line();
        runFunction(sayHello, "sayHello");
        break;
      case 4:
        line();
        runFunction(sayHello, "sayHello");
        break;
      case 5:
        line();
        runFunction(sayHello, "sayHello");
    case 0:
        line();
        std::cout << "                                        EXITING MENU           \n";
        break;
        default:
        line();
        std::cout << "                                      INVALID CHOICE            \n";
        break;
        }
    } while (choice != 0);
}