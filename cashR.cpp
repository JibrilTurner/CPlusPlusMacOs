#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string name;
    int ownerID;
    int balance;
    string password;

    void info() {
        cout << "Name: " << name << endl;
        cout << "OwnerID: " << ownerID << endl;
        cout << "Password: " << password << endl;
        cout << "Balance: " << balance << endl;
    }

};



    void writeToTxtFile() {
        ofstream myfile("accounts.txt", ios::app); // Create or append to file
        if (myfile.is_open()) {
            myfile << "Name: " << name << endl;
            myfile << "OwnerID: " << ownerID << endl;
            myfile << "Password: " << password << endl;
            myfile << "Balance: " << balance << endl;
            myfile << "-------------------------" << endl;
            myfile.close();
            cout << "Account information written to file." << endl;
        } else {
            cout << "Unable to open file." << endl;
        }
    }
    
void Register() {
    Account myAccount;
    myAccount.name = "John Doe";
    myAccount.ownerID = 12345;
    myAccount.balance = 1000;
    myAccount.password = "mypassword";
    myAccount.info();
    myAccount.writeToTxtFile();
}



void tmpd() {
    int choice;
    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            Welcom                                     \n\n";
        std::cout << "                                      1. deposit \n\n";
        std::cout << "                                      2. Info \n\n";
        std::cout << "                                      3. Register \n\n";
        std::cout << "                                      4. <> \n\n";
        std::cout << "                                      0. Exit\n\n\n\n\n\n\n\\n\n";
        std::cout << "                                      Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              deposit() vx.x        \n";
        deposit(); 
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              <>() vx.x        \n";
                break;
      case 3:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              Register() vx.x        \n";
        Register();
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
 
// void writeToFile(string input, string filename) {
//     ofstream outputFile;
//     outputFile.open(filename);

//     if (outputFile.is_open()) {
//         outputFile << input << endl;
//         outputFile.close();
//         cout << "Input has been written to file." << endl;
//     }
//     else {
//         cout << "Unable to open file." << endl;
//     }
// }

int main(){ 

tmpd(); 


}