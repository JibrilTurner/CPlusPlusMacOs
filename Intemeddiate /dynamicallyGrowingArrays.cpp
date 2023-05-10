#include <iostream>

struct vector {
    int size; // this is a variable to renumber the size
    int* data; // this is saying we want a pointer to the size of an array
    int used; // This variable indicates how many array slots have been used up
};

void init(struct vector* self) { // 'self' is a pointer to the vector object that we want to initialize
    self->size = 3; // the base size upon initialization
    self->data = new int[self->size]; // this allocates memory from the heap to reserve memory for the array
    self->used = 0; // Initialize 'used' to zero, indicating no slots are used yet
}

void add(struct vector* self, int value) { // 'self' is a pointer to the vector object that we want to add 'value' to
    if (self->size == self->used) { // size and used spaces are equal to each other
        self->size += self->size; // if vector is full, double its size
        int* new_data = new int[self->size]; // allocate new memory for the array
        for (int i = 0; i < self->used; ++i) {
            new_data[i] = self->data[i]; // copy existing data to the new memory location
        }
        delete[] self->data; // free the old memory
        self->data = new_data; // update the pointer to the new memory location
    }
    self->data[self->used++] = value; // Add 'value' to 'data' array at the current 'used' index, then increment 'used'
}

int main() {
    struct vector squares; // Declare a vector object called 'squares'
    init(&squares); // Initialize 'squares' by setting 'used' to zero
    for (int i = 1; i < 100; ++i) { // Loop to fill 'squares' with numbers up to ten
        add(&squares, i * i); // Add the square of 'i' to 'squares' using the 'add' function
    }
    return 0;
}


/*
#include <iostream>

struct vector {
    int size; // this is a variable to renumber the size
    int * data; // this is saying we want a pointer to the size of an array
    int used;    // This variable indicates how many array slots have been used up
};

void idnit(struct vector* self) {  // 'self' is a pointer to the vector object that we want to initialize
    self->size = 3; // the base size upan initazation 
    self->data = malloc(self->size * sizeof(int)); // this allocates memory from the heap to reserve memory for the array
    self->used = 0; // Initialize 'used' to zero, indicating no slots are used yet
}

void add(struct vector* self, int value) { // 'self' is a pointer to the vector object that we want to add 'value' to
    if (self->size == self->used){ //size and used spaces are equal to each other 
        self->size += self->size; // if vector is full double its sizes 
        self->data = realloc(self->data,self->size * sizeof(int));// this is saying we want to reallocate memory for the array
    }
    self->data[self->used++] = value; // Add 'value' to 'data' array at the current 'used' index, then increment 'used'
}

int main() {
    struct vector squares; // Declare a vector object called 'squares'
    idnit(&squares); // Initialize 'squares' by setting 'used' to zero
    for (int i = 1; i < 100; ++i) { // Loop to fill 'squares' with numbers up to ten
        add(&squares, i * i); // Add the square of 'i' to 'squares' using the 'add' function
    }
    return 0;
}

*/