#include <iostream>

// This is an example of how pointers can be used to change the actual values of variables rather than just copies of them.
// This is called "pass by reference" because we are passing the memory location of the variable rather than a copy of the variable.
// This is a very common technique in C++.

void swap(int* a, int* b) { // saying i want the memoery location of a and b
    int temp = *a; // saying i want temp to be the value of a 
    *a = *b; // setting the value of a to be the value of b
    *b = temp; // setting the value of b to be the value of temp
}

int main() {
    int a = 1;
    int b = 5;

    std::cout << "Address of a: " << &a << std::endl; // the & is getting the address of variable
    std::cout << "Address of b: " << &b << std::endl; // the & is getting the address of variable

    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    swap(&a, &b); // following through 

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
