#include <iostream>
#include <fstream>

using namespace std;

string input;

void tmpd() {
    int choice;
    
    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            <>                                     \n\n";
        std::cout << "                                      1. <> \n\n";
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
        std::cout << "                                              <>() vx.x        \n";
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
 
void writeToFile(string input, string filename) {
    ofstream outputFile;
    outputFile.open(filename);

    if (outputFile.is_open()) {
        outputFile << input << endl;
        outputFile.close();
        cout << "Input has been written to file." << endl;
    }
    else {
        cout << "Unable to open file." << endl;
    }
}

void mMenu() {
    int choice;
    string input;

    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            <>                                     \n\n";
        std::cout << "                                      1. <> \n\n";
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
        std::cout << "                                              <>() vx.x        \n";
        cout << "Enter text to write to file: ";
        std::cin.ignore();
        std::getline(std::cin, input);
        writeToFile(input, "output.txt"); // Change filename as desired

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
int main(){
    
    mMenu(); 
    return 0;
}