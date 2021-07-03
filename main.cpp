#include <iostream>
#include "mylib.h"

using namespace std;

int main()
{
    int positive = 0;
    int negative = 0;
    int size;
    cout << "Enter array size: ";
    cin >> size;
    float arr[size];

    arrReg(arr, size);
    printArray(arr,size);
    arrSort(arr,size,positive,negative);
}
