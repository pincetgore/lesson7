#include <iostream>
#include "mylib.h"
#include <fstream>
#include <cstdlib>

using namespace std;

#define RANGE(x,y) ((x)>=0 && (x)<(y)) ? (cout << "True" << endl) : (cout << "False" << endl)
#define ARRSIZE 5

#pragma pack(push, 1)
struct Company {
    string id;
    int year;
    float salary;
};
#pragma pack(pop)

void printStruct(Company * ptr)
{
    if (ptr!=nullptr)
    {
        cout << "id: " << ptr->id << endl;
        cout << "year of birth: " << ptr->year << endl;
        cout << "salary: " << ptr->salary << endl;
    }
}

void fileSave(const string Task4file, Company*ptr)
{
    ofstream outf(Task4file+".txt");

    if(outf.is_open())
    {
      outf<<"id: " << ptr->id << endl << "year of birth: " << ptr->year << endl << "salary: " << ptr->salary << endl;
      outf.close();
    }
    else
    {
        cerr << "Your txt file could not be opened for writing" << endl;
        exit(1);
    }
}

int main()
{
//    //Task 1 and Task 5
//    int positive = 0;
//    int negative = 0;
//    int size;
//    cout << "Enter array size: ";
//    cin >> size;
//    float arr[size];
//    MyN::arrReg(arr, size);
//    MyN::printArray(arr,size);
//    MyN::arrSort(arr,size,positive,negative);

//    //Task 2
//    RANGE (9,10);

//    //Task 3
//    float arr[ARRSIZE];
//    arrReg(arr, ARRSIZE);
//    cout << "You entered: ";
//    printArray(arr,ARRSIZE);
//    cout << endl;
//    arrBubbleSort (arr, ARRSIZE);
//    cout << "Bubble-sorting result: ";
//    printArray(arr,ARRSIZE);

//    //Task 4
//    cout << "The size of a structure is " << sizeof(Company) << " bytes after #pragma pack preprocessing;" << endl;
//    Company * ptr = new (nothrow) Company;
//    if (ptr!=nullptr)
//    {
//        ptr->id = "Memsipax";
//        ptr->year = 1990;
//        ptr->salary = 120.260;
//    }
//    printStruct(ptr);
//    fileSave("Task4", ptr);
//    delete ptr;

}
