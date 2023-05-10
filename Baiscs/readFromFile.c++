#include <iostream>
#include <fstream>
#include <string>
#include <sstream>  // include this header for istringstream

int main() {
    std::ifstream inputFile("runAsExe.txt");
    std::string line;
    int count = 0; // counter for number of numbers read
    if (inputFile.is_open()) {
        while (std::getline(inputFile, line)) {
            // split line into space-separated numbers
            std::istringstream iss(line);
            std::string num_str;
            while (iss >> num_str) {
                ++count;
                if (count == 3) {
                    int num = std::stoi(num_str);
                    if (num % 2 == 0) {
                        std::cout << num << " is even." << std::endl;
                    } else {
                        std::cout << num << " is odd." << std::endl;
                    }
                    break;
                }
            }
        }
        inputFile.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
    return 0;
}
