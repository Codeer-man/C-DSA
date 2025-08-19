// Write a C program to calculate the income tax based on the given salary using if-else statements and tax brackets.

#include <stdio.h>

int main() {
    double income, tax;

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    tax = income * 0.01;

    if (income <= 500000) {
        tax += 0; 
    }
    else if (income <= 1000000) {
        tax += (income - 500000) * 0.10;
    }
    else if (income <= 1300000) {
        tax += (500000 * 0.10) + (income - 1000000) * 0.20;
    }
    else if (income <= 2000000) {
        tax += (500000 * 0.10) + (300000 * 0.20) + (income - 1300000) * 0.30;
    }
    else {
        tax += (500000 * 0.10) + (300000 * 0.20) + (700000 * 0.30) + (income - 2000000) * 0.36;
    }

    printf("Total Tax Payable: NPR %.2lf\n", tax);

    return 0;
}
