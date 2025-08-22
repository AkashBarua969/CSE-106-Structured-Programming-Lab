// Question: Write a C program to pass structure to a function.

#include <stdio.h>

// Structure declaration
struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to display employee information
void display(struct Employee e) {
    printf("\n--- Employee Details ---\n");
    printf("Name  : %s\n", e.name);
    printf("ID    : %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
}

int main() {
    struct Employee emp;

    // Input employee data
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';  // remove newline

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Pass structure to function
    display(emp);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}
