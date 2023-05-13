#include <iostream>

using namespace std;

struct sPerson{
    int age; 
};

struct sPerson *getNewPerson(const int age){

    struct sPerson *newPerson = NULL;
    newPerson = (struct sPerson *)malloc(sizeof(struct sPerson));
    newPerson -> age = age; 
    std::cout << "new person at:"<<newPerson << std::endl; 
    return newPerson;
}

void printPerson(const struct sPerson *person , const char *message){

    if (person == NULL){
        std::cout << " aNULL" << std::endl; // to let us know that the pointer is null
    }
    else{
        printf("%s: age:%d adress:%p\n", message, person -> age, person );
     }
}

int main(){

    std::cout << "\n\n** START **\n\n" << std::endl;

    struct sPerson *first = NULL;  // creating a pointer to a struct that being first  // pointer is here because we want to point to the struct
    struct sPerson *second = NULL; // creating a pointer to a struct that being second // pointer is here because we want to point to the struct

    printPerson(first, "first");
    printPerson(second, "second");

    first = getNewPerson(125); // each of those is set to the pointer newPerson
    second = getNewPerson(100); // each of those is set to the pointer newPerson

    printPerson(first, "first ");
    printPerson(second, "second ");

    free(first); // free the memory
    free(second); // free the memory

    std::cout << "\n\n** END **\n\n" << std::endl;
}