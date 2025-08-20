//WAP to find LCM and HCF of two input numbers using two separate functions. 

#include <stdio.h>

// Function to find HCF (GCD)
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;   
}

// Function to find LCM
int lcm(int a, int b) {
    return (a * b) / hcf(a, b); 
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF of %d and %d = %d\n", num1, num2, hcf(num1, num2));
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
