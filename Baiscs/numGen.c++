#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int previousDigit = -1; // Initially, there is no previous digit
    for(int i=0; i<500; i++) {
        int digit;
        do {
            digit = rand() % 100; // Generate a random digit between 0 and 9
        } while(digit == previousDigit); // Repeat until the digit is different from the previous one
        cout << digit << ", "; // Output the generated digit
        previousDigit = digit; // Remember the generated digit as the previous one for the next iteration
    }
    cout << endl;

    return 0;
}
