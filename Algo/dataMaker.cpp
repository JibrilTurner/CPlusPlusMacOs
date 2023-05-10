#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// int main() {
//     for (int j = 0; j < 1; j++){
//         srand(time(0)); // Seed the random number generator with the current time
//         // cout << "int arr[] = {";
//         int previousDigit = -1; // Initially, there is no previous digit
//         for(int i=0; i<50; i++) {
//             int digit;
//             do {
//                 digit = rand() % 100; // Generate a random digit between 0 and 9
//             } while(digit == previousDigit); // Repeat until the digit is different from the previous one
//                     cout << digit << ", "; // Output the generated digit
//                     previousDigit = digit; // Remember the generated digit as the previous one for the next iteration
//     // Check if the current iteration is a multiple of 25, and if it is, add a newline character
//         if((i+1) % 25 == 0) {
//             cout << "\n";
//             }
//         }
//     }

//     // cout << "};"<<endl;./random > output.txt
//     return 0;
// }
int main() {
    for (int j = 0; j < 1; j++){
        srand(time(0)); // Seed the random number generator with the current time
        cout << "int arr[] = {";
        int previousDigit = -1; // Initially, there is no previous digit
        for(int i=0; i<50; i++) {
            int digit;
            cout << i << ", ";
            }
        }
        cout << "};"<<endl;

        return 0;
    }

    // cout << "};"<<endl;./random > output.txt

