// It takes the memory adress of hexadecimal (16 nums total)
#include<iostream>
using namespace std;

int main(){
    int a =10;
    float p = 100.25;

    // pointer variable that store address of other variable
    int* ptr = &a;
    float* price = &p;

    // pointer to pointer
    int** parentPtr1 = &ptr;
    float** parentPtr2 = &price;

    cout <<&a << endl; 
    cout <<ptr << endl; 
    cout <<&ptr << endl; 
    cout <<&price << endl; 

    // Deference operator 
    cout << *(&a) << endl;

    // Null pointer = A pointer that does not point any location
    int* null = NULL;

    return 0;
}