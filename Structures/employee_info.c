// Question: Write a C program to store employee details (name, salary, department).

#include <stdio.h>

// Structure to store employee information
struct Employee {
    char name[50];
    float salary;
    char department[50];
};

int main() {
    struct Employee emp;

    // Employee input
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';  // remove newline

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    getchar();  // remove newline

    printf("Enter employee department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = '\0';  // remove newline

    // Display employee information
    printf("\n--- Employee Details ---\n");
    printf("Name      : %s\n", emp.name);
    printf("Salary    : %.2f\n", emp.salary);
    printf("Department: %s\n", emp.department);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

