#include <iostream>
#include "myHeader.h"

void tmpd() {
    int choice;
    
    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            Example                                     \n\n";
        std::cout << "                                      1. fLoopTwo \n\n";
        std::cout << "                                      2. <> \n\n";
        std::cout << "                                      3. <> \n\n";
        std::cout << "                                      4. <> \n\n";
        std::cout << "                                      0. Exit\n\n\n\n\n\n\n\\n\n";
        std::cout << "                                      Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              fLoopTwo() vx.x        \n";
        fLoopTwo();
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              <>() vx.x        \n";
                break;
      case 3:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              <>() vx.x        \n";
                break;
    case 0:
        std::cout << "\n\n\n\n\n************************************************************************************************n";
        std::cout << "                                        EXITING MENU           \n";
            break;
            default:
        std::cout << "\n\n\n\n\n************************************************************************************************n";
        std::cout << "                                      INVALID CHOICE            \n";
                break;
        }
    } while (choice != 0);
}
