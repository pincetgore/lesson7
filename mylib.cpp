#include <iostream>

using namespace std;

int arrReg(float arr[], int size)
{
    bool fail = false;
    for (int i = 0; i < size; i++)
    {
        do {
            fail = false;
            cout << "Enter " << i << " array number = ";
            cin >> arr[i];
            if (cin.fail())
            {
                cout << "Entered value is incorrect! Please try again." << endl;
                fail = true;
            }
            cin.clear();
            cin.ignore();
        } while (fail);
    }
return 0;
}

void printArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

void arrSort(float arr [], int size, int& positive, int& negative)
{
    cout << endl;
    cout << "Total amount of array elements: " << size << endl;
    for (int i=0; i<size; i++)
    {
        if (arr[i] > 0)
            ++positive;
        else if (arr[i] < 0)
            ++negative;
    }
    cout << "Amount of Positive numbers = " << positive << endl;
    cout << "Amount of Negative numbers = " << negative << endl;
}
