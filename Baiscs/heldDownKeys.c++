// Written By ChatGpt 
/* 
   MacOs 
   Conversion Of the windows version over to macOs
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <termios.h>
#include <unistd.h>

int main() {
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