#include <iostream>
#include <cstring> 
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

int main(){ 
    //fLoopOne();
    fLoopTwo(); 
    return 0; 
}

