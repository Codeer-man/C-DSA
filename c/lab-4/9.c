// WAP to find the sum of square of diagonal elements of a 3x3 matrix
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, sum = 0;

    for (i = 0; i < 3; i++) {
        sum += matrix[i][i] * matrix[i][i];
    }

    printf("Sum of squares of diagonal elements = %d\n", sum);

    return 0;
}
