#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            return mid;
        }
        else if(arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
int binarySearch2(int arr[], int len, int x){
    int left = 0; 
    int right = len - 1;
    while(left <= right){
        int mid = left + (right - left); 
        if (arr[mid] == x){                // if the middle of the array equals x(Target) Then retrun the middle 
            return mid;
        }
        else if (arr[mid] < x){            // if the middle of the array is lesser than the x(Target), Then Serch Left? 
            left = mid + 1;
        }
        else if (arr[mid] > x){            // if the middle of the array is lesser than the x(Target), Then Serch Left? 
            right = mid - 1;
        }
        
    }
}

int main() {

    int arr[] = {'a','b','c','d','e','f','g','h','i'};
    int len = sizeof(arr) / sizeof(arr[0]);
    std::cout << binarySearch2(arr, len, 'f') << std::endl;



    // ifstream inputFile("input.txt");
    // if(!inputFile) {
    //     cerr << "Error: Unable to open input file!" << endl;
    //     return 1;
    // }
    // cout << "Status: Opened input file!" << endl;

    // int n;
    // inputFile >> n;
    // int arr[n];
    // for(int i=0; i<n; i++) {
    //     inputFile >> arr[i];
    // }
    // inputFile.close();

    // int x = 242;
    // int result = binarySearch(arr, 0, n-1, x);
    // if(result == -1) {
    //     cout << "The number " << x << " is not present in the array." << endl;
    // }
    // else {
    //     cout << "The number " << x << " is present in the array at index " << result << "." << endl;
    // }
     return 0;
}