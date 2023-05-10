#include <iostream>
using namespace std;

// it needs a pivoit, thats at the end, middle or start. In this case start 
// Finding the final resting placae

// This code needs two vars, with i being at index 0 and j being at index 2.
// as well as that theres a var called temp, which is used to swap values.
// what needs to happen is to check wehter or not j is less than pivoit

// if greater or equal ignore it. Then increment j by 1 
// if j is less than our pivot, increment i. Than i and j get swapped with the temp var.

// take i and move it to temp 
// take j and assign it to i 
// take the value to temp and assign to j 

// incremnt j, Check to see if less than pivot. If it  

// if greater or equal ignore it. Then increment j by 1 
// if j is less than our pivot, increment i. Than i and j get swapped with the temp var.

// take i and move it to temp 
// take j and assign it to i 
// take the value to temp and assign to j 

// repte until j is equal to the pivot 
// once j is equal to pviot, all emelemts left to the pivot should be less than it
// and all the numbers right of it should be greater than five 

// now split the array into two partitions. 
// then run the algorthim through thosue partitions. 
// this is a recursive aloritm


int partition(int arr[], int iStart, int jEnd) {
    int pivot = arr[jEnd];
    int i = iStart - 1;
    for (int j = iStart; j <= jEnd - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[jEnd];
    arr[jEnd] = temp;
    return i+1; // location of pivot
}

void quickSort(int arr[], int iStart, int jEnd){
    if (jEnd <= iStart){
        return; 
    }  
    int pivot = partition(arr, iStart,jEnd);
    quickSort(arr, iStart, pivot - 1); 
    quickSort(arr, pivot + 1, jEnd); 
}


int main() {
    int arr[] = {8,2,5,3,9,4,7,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    quickSort(arr, 0, n - 1 );
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
