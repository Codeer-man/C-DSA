// Write a C program to determine the grade of a student based on their marks using if-else statements.

#include <stdio.h>

int main() {
    int mark;

    printf("Enter the user marks: ");
    scanf("%d", &mark);

    if(mark < 0 || mark > 100) {
        printf("Invalid marks\n");
    } else if(mark == 0) {
        printf("The grade is N\n");
    } else if(mark > 0 && mark <= 20) {
        printf("The grade is E\n");
    } else if(mark > 20 && mark <= 40) {
        printf("The grade is D\n");
    } else if(mark > 40 && mark <= 50) {
        printf("The grade is C\n");
    } else if(mark > 50 && mark <= 60) {
        printf("The grade is C+\n");
    } else if(mark > 60 && mark <= 70) {
        printf("The grade is B\n");
    } else if(mark > 70 && mark <= 80) {
        printf("The grade is B+\n");
    } else if(mark > 80 && mark <= 90) {
        printf("The grade is A\n");
    } else {
        printf("The grade is A+\n");
    }

    return 0;
}
