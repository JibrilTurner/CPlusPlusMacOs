#include <iostream>
#include <fstream>
#include <time.h>
#include <cmath>

double sum(double start, double end, double inc) {
    double rend = end + 1; 
    double sum = 0;

    for (double i = start; i < rend; i += inc) {
        double solu = pow((3.0/2), i) - 1; 
        sum += solu; 
    }
    return sum;
}

int main(){
    std::cout << sum(1,4,1) << std::endl; 
    return 0;
}