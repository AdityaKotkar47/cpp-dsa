#include <iostream>

using namespace std;

void printArr(int* arr, int len){
    for (int i{0}; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void method1(int* arr, int len){
    int copyArr[len], j;

    for (int i{0}; i < len; i++){
        j = len - 1 - i;
        copyArr[i] = arr[j];
    }

    for (int i = 0; i < len; i++)
    {
        arr[i] = copyArr[i];
    }
    
}

void method2(int* arr, int len){
    for (int i{0}; i < len/2; i++){
        swap(arr[i], arr[len - 1 - i]); // swap params are taken by reference even when i passed by value
    }
}


int main() {

    int arr[5] = {5,55,555,35,45};
    int len = sizeof(arr) / sizeof(int);

    // method 1: using extra array

    method1(arr, len);
    printArr(arr, len);
    
    // method 2: using 2 pointer approach

    method2(arr, len);
    printArr(arr, len);

    return 0;
}