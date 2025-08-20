//WAP to check whether a number is prime or composite using function.
 
#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    int i;
    if (n <= 1) return 0; 
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; // prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is a Composite number\n", num);

    return 0;
}
