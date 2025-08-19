// Write a program to display the Size of the Different Datatypes in C.


#include <stdio.h>

int main() {
    int i;
    float f;
    char c;
    double d;
    long l ;
    
    printf("size of inteter is %d \n",sizeof(i));
    printf("size of float is %d \n",sizeof(f));
    printf("size of char is %d \n",sizeof(c));
    printf("size of double is %d \n",sizeof(d));
    printf("size of long is %d \n",sizeof(l));

    return 0;
}