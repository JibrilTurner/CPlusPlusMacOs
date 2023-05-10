/*
Simple Sorting Algrothim 
Quadric Time O(n^2)
Simple implementaion
*/

/*
Goal
2 3 4 9 3 1  
1 2 3 3 4 0
*/

/*
2 6 5 1 3 5 
arr[0] = cur_min
Check if arr[0] is lesser than everything in front
    if an element is than 1 is now the cur_min 
    cur_min = arr[3]
    once at the end of list swap 1 with two than repete with 1 being the cur_min
*/

#include <iostream>
#include <iterator>

using namespace std;

void selectionSort(int arr[], int len){
    for (int i = 0; i < len; i++){                    
        int min = i;
        for (int j = i+j; j < len; j++){
            min = j;
        }
    if (min!=i){
        arr[min] = arr[i];
        arr[i] = arr[min];
        } 
    }
}


int main(){
        int arr[] = {2,6,5,1,3,4};
        int len = sizeof(arr) / sizeof(arr[0]);
        selectionSort(arr,len);
        std::cout << arr ;
        return 0; 
}