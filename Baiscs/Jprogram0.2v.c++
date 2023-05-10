#include <iostream>
#include <chrono>
#include <thread>
#include <termios.h>
#include <unistd.h>


// Define the functions to be executed
void function1() {
    std::cout << "This is function 1.\n";
}

void function2() {
    std::cout << "This is function 2.\n";
}

void function3() {
    std::cout << "This is function 3.\n";
}

















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



















void heldDownKeys() {
    std::cout << "Press and hold 'a' key to trigger input...\n";
    while (1) {
        struct termios oldt, newt;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        if (std::cin.peek() == 0x00 || std::cin.peek() == 0x61) {
            std::cout << "Input detected: 'a' key held down\n";
            std::cin.ignore();
        }
    }
    return 1;
}
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

int sub(int x,int y){
    return x-y; 
}
 
int binarySearch2(int arr[], int len, int x){
    int left = 0; 
    int right = len - 1;
    while(left <= right){
        int mid = left + (right - left); 
        if (arr[mid] == x){                // if the middle of the array equals x(Target) Then retrun the middle 
            return mid;
        }
        else if (arr[mid] < x){            // if the middle of the array is lesser than the x(Target), Then Serch Left? 
            left = mid + 1;
        }
        else if (arr[mid] > x){            // if the middle of the array is lesser than the x(Target), Then Serch Left? 
            right = mid - 1;
        }
        
    }


int arr[] = {'a','b','c','d','e','f','g','h','i'};
    int len = sizeof(arr) / sizeof(arr[0]);
    std::cout << binarySearch2(arr, len, 'f') << std::endl;




}

void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1; 
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        } 
    arr[j+1] = key;

    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int arr[] = {88, 8, 75, 92, 4, 41, 63, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int len){
    for (int i = 0; i < len; i++){         
                                                                             
        std::cout << arr[i] << std::endl;
    }
    int main(){
        int arr[] = {2,6,5,1,3,4};
        int len = sizeof(arr) / sizeof(arr[0]);
        selectionSort(arr,len);
        return 0; 
}
}

void advInputMenu() {
        int choice;
    
    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            advInputMenu v0.1                                     \n\n";
        std::cout << "                                          1. advInputOne \n\n";
        std::cout << "                                          2. advInputTwo \n\n";
        std::cout << "                                          3. <> \n\n";
        std::cout << "                                          4. <> \n\n";
        std::cout << "                                          0. Exit\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << "                                          Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              advInputOne() v0.1        \n";
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              advInputTwo() v0.1        \n";
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

void advGpMenu() {
    int choice;
    
    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            AdvGpMenu                                  \n\n";
        std::cout << "                                      1. advInputMenu() \n\n";
        std::cout << "                                      2. <> \n\n";
        std::cout << "                                      3. <> \n\n";
        std::cout << "                                      0. Exit\n\n\n\n\n\n\n\n\n\n";
        std::cout << "                                      Enter your choice: ";        
        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              advInputOne() v0.1        \n";
        break;
     case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              advInputTwo() v0.1        \n";

        break;
      case 3:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                                <>() vx.x        \n";
                break;
    case 0:
        std::cout << "\n\n\n\n\n************************************************************************************************n";
        std::cout << "                                                EXITING MENU           \n";
            break;
            default:
        std::cout << "\n\n\n\n\n************************************************************************************************n";
        std::cout << "                                               INVALID CHOICE            \n";
                break;
        }
    } while (choice != 0);
}

void fLoopMenu() {
    int choice;
    
    do {
        // Print the menu options
        std::cout << "\n************************************************************************************************";
        std::cout << "\n                                            fLoops                                     \n\n";
        std::cout << "                                      1. fLoopOne() \n\n";
        std::cout << "                                      2. fLoopTwo() \n\n";
        std::cout << "                                      3. <> \n\n";
        std::cout << "                                      4. <> \n\n";
        std::cout << "                                      0. Exit\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << "                                          Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                           fLoopOne() v0.1        \n";
        fLoopOne();
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                           fLoopTwo() v0.1        \n";
        fLoopTwo();
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

void subMenuGp() {
        int choice;
    
    do {
        // Print the menu options
        std::cout << "                                          1. fLoops \n\n";
        std::cout << "                                          2. advGpMenu \n\n";
        std::cout << "                                          3. <> \n\n";
        std::cout << "                                          4. <> \n\n";
        std::cout << "                                          0. Exit\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << "                                          Enter your choice: ";

        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
      case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              fLoopMenu() v0.1        \n";
        fLoopMenu();
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              advGpMenu() v0.1        \n";
        advGpMenu();
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




// Define the menu function
void subMenuMath() {
    int choice;
    
    do {

        std::cout << "                                            1. sub() \n\n";
        std::cout << "                                            2. <> \n\n";
        std::cout << "                                            3. <> \n\n";
        std::cout << "                                            4. <> \n\n";
        std::cout << "                                            0. Exit\n\n\n\n\n\n\n\\n\n";
        std::cout << "                                            Enter your choice: ";
        
        // Read the user's choice
        std::cin >> choice;
        
        // Execute the chosen function
        switch (choice) {
            case 1:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                              sub() v0.2        \n";
        int x, y;
        std::cout << "Enter the value of x: ";
        std::cin >> x;
        std::cout << "Enter the value of y: ";
        std::cin >> y;

        std::cout <<"The Value is "<< sub(x, y) << std::endl;
        std::cout <<" \n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl; 
        break;
            case 2:
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






// Define the menu function
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
        subMenuMath();
        break;
      case 2:
        std::cout << "\n************************************************************************************************\n";
        std::cout << "                                          subMenuGp() v0.2        \n";
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


// Main function
int main() {
    menu();
    return 0;
}
