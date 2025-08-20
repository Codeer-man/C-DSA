/*Write a program to create a structure Employee with members: id (integer), name (string), and salary (float).
Accept details of multiple employees and display those earning more than a user-defined salary threshold.
Also Find and display the employee with the highest salary. */


#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter number of data");
    scanf("%d",&n);
    struct Employee emp[n];

    // Input employee details in two lines
    for(i = 0; i < n; i++) {
        printf("Enter Name and Salary (respectively): ");
        emp[i].id = i+1;
        scanf("%s %f",&emp[i].name,&emp[i].salary);
    }

    // Display all employees
    printf("\nEmployee Details:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    // Find employee with highest salary
    int maxIndex = 0;
    for(i = 1; i < n; i++) {
        if(emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nEmployee with highest salary:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n", emp[maxIndex].id, emp[maxIndex].name, emp[maxIndex].salary);

    return 0;
}
