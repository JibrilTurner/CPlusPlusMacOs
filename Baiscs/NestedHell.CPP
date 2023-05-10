#include <iostream>
#include <cstdlib>
#include <ctime>

void introToHell(){
    int start, end, inc; 
    std::cout << "Loop Builder\nStart -> End -> Inc" << std::endl;
    std::cin >> start >> end >> inc; 
    for (int x = start; x <= end; x+=inc){
        std::cout << x << std::endl; 
    }
}
void greatestHell(){    
    int num[6] = {1,2,1,3,3,1};
    int count = 0; 
    std::cout << "Find frequency of each digit in a given integer:" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    for (int i = 0; i < 6; i++){
        std::cout << "The frequency of " << i << " = " << std::endl;
        int ctr = 0;
         
    }
        std::cout << count << std::endl;
}
/*
 Find frequency of each digit in a given integer:                      
-----------------------------------------------------                                                               
The frequency of 0 = 0                                                 
The frequency of 1 = 1                                                 
The frequency of 2 = 2                                                 
The frequency of 3 = 1                                                 
The frequency of 4 = 1                                                 
The frequency of 5 = 1                                                 
The frequency of 6 = 0                                                 
The frequency of 7 = 0                                                 
The frequency of 8 = 0                                                 
The frequency of 9 = 0
*/
    

int main(){ 
//  introToHell();
    greatestHell();
    return 0; 
}