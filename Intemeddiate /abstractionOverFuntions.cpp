#include <iostream>
#include <iomanip>

void printTable(int n, int (*f)(int, int)){ // what the compiler does // but this allows you to be more explicit
    // The original void printTable(int n, int f(int, int)){ // this is perfectly fine too
    for(int i = 1; i <= n; ++i){
        for (int k = 1; k <= n ; ++k){
        std::cout << std::setw(4) << f(i, k);
        }
        std::cout << '\n';
    }
}
int times(int a, int b) {
    return a * b;
}
int plus(int a, int b) {
    return a + b;
}


int main(){
    int (*f)(int,int) = times; // prevents an error as functions can't be copied
    (&printTable)(5, &plus); // the C compiler also quietly inserts & for us too
    // the reason why this works is the compiler already does this behind the scenes 
    // as you must know the address of the function to even call it 
    // But the original works too printTable(5, plus);
    printTable(5, times); // in fact, the plus print table is redundant as it serves no real use
    return 0; 
}

/*
void printTable(int n, int (*f)(int, int)){ // what the complier does // but this allows you to be more exsplit
    // The origanl void printTable(int n, int f(int, int)){ // this is perfectly fine too
    for(int i = 1; i <=n; ++i){
        for (int k = 1; k <= n ; ++k){
            printf("%4d", f(i, k));
        }
        putchar('\n');
    }
} 
int times(int a, int b) {
    return a * b;
}
int plus(int a, int b) {
    return a + b;
}


int main(){
    int (*f)(int,int) = times; // pervents a error as funtions cant be copied
    (&printTable)(5, &plus); // the C complier also quitly insterts & for us too
    // the reason why this works is the complier already does this behind the scenses 
    // as you must know the address of the funtion to even call it 
    // But the origanl works too printTable(5, plus);
    printTable(5,times) // in fact the plus print table is redudent as it serves no real use
    return 0; 
}
*/