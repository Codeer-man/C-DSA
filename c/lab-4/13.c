//WAP to input any five integers in an array and display the second largest number.
#include <stdio.h>

int main() {

    int arr[5];
    printf("Enter  numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest) {
            if (secondLargest == -1 || arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
    }
    printf("Second largest element = %d\n", secondLargest);
    return 0;
}
