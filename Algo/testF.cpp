#include <iostream>
using namespace std;


void triangle(int n){
    for(int i = 0; i < n; i++){ // The Outer Loop Will Deterimne Many Times Iterates Based On n
            for(int j = 0; j <= i; j++){ // The innter loop iterates i times,which is based on n. 
            // andwhere i is the current value of the otuter loop 
                cout << "*" << " "; 
            }
            cout << endl; 
        }
}

void nLoopOne(){
    for (int x = 0; x < 2; x++){
        for (int i = 0; i < 2; i++){
            cout << "cracking egg number " << i << "of carton" << x << endl;

        }
    }
}
int main(){ 
    nLoopOne();
    return 0;
}