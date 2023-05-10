#include <iostream>
#include "myHeader.h"

void menu() {
    int choice;
    
    do {
        // Print the menu options
        std::cout << "\n    _____        _______     "                                                                                << std::endl;
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
    
        std::cout << "                                      \n\n\n\n\n                                      1. SubMenuMath()\n\n";
        std::cout << "                                      2. Run subMenuGp()\n\n";
        std::cout << "                                      3. Run subMenuGp()\n\n";
        
        std::cout << "                                      0. Exit\n\n";
        std::cout << "                                      Enter your choice: ";
        std::cout << "\n\n\n\n\n                                                                              v10.2                    ";
        
        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                          subMenuMath() v0.2        \n";
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                          subMenuGp() v0.2        \n\n";
        subMenuGp();
      case 3:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                         <>() vx.x        \n";
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
