// 02_01_arrays.cpp : Defines the entry point for the console application

#include <iostream>

using namespace std;

int main(){
    double values[10];         // declare an array values with 10 elements
    double* pValue = values;   // define a pointer to the array
    cout << "value array address: " << values << endl;
    cout << "pValues: " << pValue << endl;

    int numbers[10];
    int* pNumbers = numbers;
    for (int i=0; i<10; i++){
        cout << "numbers address " << i << ": " << pNumbers + i << endl;
    }
    return 0;
}