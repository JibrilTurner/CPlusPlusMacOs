#include <iostream>
#include "myHeader.h"

void subMenuGp() {
        int choice;
    
    do {
        // Print the menu options
        std::cout << "                                          1. fLoopOne \n\n";
        std::cout << "                                          2. fLoopTwo \n\n";
        std::cout << "                                          3. userInputOne \n\n";
        std::cout << "                                          4. userInputTwo \n\n";
        std::cout << "                                          5. tryCatch \n\n";

        std::cout << "                                          0. Exit\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << "                                          Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        line();
        runFunction(userInputOne, "userInputOne");
        break;
      case 2:
        line();
        std::cout << "                                              fLoopTwo() v0.1        \n";
        fLoopTwo();
        break;
      case 3:
        line();
        std::cout << "                                              userInputOne() vx.x        \n";
        userInputOne();
        break;
      case 4:
        line();
        std::cout << "                                              userInputTwo() vx.x        \n";
        userInputTwo();
        break;
      case 5:
        line();
        std::cout << "                                              tryCatch() vx.x        \n";
        tryCatch();
    case 0:
        line();
        std::cout << "                                               EXITING MENU           \n";
            break;
            default:
        line();
        std::cout << "                                               INVALID CHOICE            \n";
                break;
        }
    } while (choice != 0);
}