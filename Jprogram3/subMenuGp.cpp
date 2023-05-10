#include <iostream>
#include "myHeader.h"

void subMenuGp() {
    int choice;

    do {
        try {
            // Print the menu options
            std::cout << "                                           1. fLoopOne \n\n";
            std::cout << "                                           2. fLoopTwo \n\n";
            std::cout << "                                           3. userInputOne \n\n";
            std::cout << "                                           4. userInputTwo \n\n";
            std::cout << "                                           5. tryCatch \n\n";

            std::cout << "                                           0. Exit\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << "                                           Enter your choice: ";

            // Read the user's choice
            std::cin >> choice;
            if (std::cin.fail()) {
                throw std::runtime_error("                              Invalid input. Please Read.\n");
            }
            if (choice == 1) {
                line();
                runFunction(fLoopOne, "fLoopOne");
            } else if (choice == 2) {
                line();
                runFunction(fLoopTwo, "fLoopTwo");
            } else if (choice == 3) {
                line();
                runFunction(userInputOne, "userInputOne");
            } else if (choice == 4) {
                line();
                runFunction(userInputTwo, "userInputTwo");
            } else if (choice == 5) {
                line();
                runFunction(tryCatch, "tryCatch");
            } else if (choice == 0) {
                line();
                std::cout << "                                        EXITING MENU           \n";
            } else {
                line();
                std::cout << "                                      INVALID CHOICE            \n";
            }
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
            std::cin.clear(); // clear the input stream
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            subMenuGp(); // rerun the function
        }
    } while (choice != 0);
}