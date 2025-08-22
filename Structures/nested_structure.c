// Question: Write a C program to nest one structure inside another.

#include <stdio.h>

// Nested structure for address
struct Address {
    char city[50];
    char state[50];
    int pincode;
};

// Employee structure containing Address
struct Employee {
    char name[50];
    float salary;
    struct Address addr;  // nested structure
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

    // Address input
    printf("Enter city: ");
    fgets(emp.addr.city, sizeof(emp.addr.city), stdin);
    emp.addr.city[strcspn(emp.addr.city, "\n")] = '\0';

    printf("Enter state: ");
    fgets(emp.addr.state, sizeof(emp.addr.state), stdin);
    emp.addr.state[strcspn(emp.addr.state, "\n")] = '\0';

    printf("Enter pincode: ");
    scanf("%d", &emp.addr.pincode);

    // Display employee information
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", emp.name);
    printf("Salary : %.2f\n", emp.salary);
    printf("City   : %s\n", emp.addr.city);
    printf("State  : %s\n", emp.addr.state);
    printf("Pincode: %d\n", emp.addr.pincode);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

