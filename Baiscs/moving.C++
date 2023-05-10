#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>


void advInputOne() {
    std::cout << "Press and hold 'a or d' key to trigger input...\n";
    while (1) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 'a') {
                std::cout << "Input detected: 'a' key held down\n";
            }
            else if (c == 'd') {
                std::cout << "Input detected: 'd' key held down\n";
            }
            else if (c == 'q') {
                return;
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(90));
    }
}


void advInputTwo(){
    std::cout << "Press and hold 'a -> d <-' key to trigger input...\n";
    std::cout << "Press q to quit\n";

    int x = 0;
    bool flag = false;
    int pos = 0;

    while (x < 444) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 'd') {
                for (int i = 1; i <= 1; i++) {
                    for (int j = 1; j <= 1; j++) {
                        std::this_thread::sleep_for(std::chrono::microseconds(1));
                        std::cout << ".";
                        std::cout.flush();
                        x += 1;
                        pos += 1;
                        if (flag) {
                            std::cout << "\b \b";
                            std::cout.flush();
                            pos -= 1;
                        }
                    }
                }
                flag = false;
            }
            else if (c == 'a') {
                if (flag) {
                    std::cout << "\b \b";
                    std::cout.flush();
                    pos -= 1;
                }
                flag = true;
            }
            else if (c == 'q') {
                return;
            }
        }
        std::this_thread::sleep_for(std::chrono::microseconds(1));
    }
}

int main() {
    advInputOne();
    return 0;
}
