// Question: Write a C program to store structure variables using pointer.

#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;          // structure variable
    struct Student *ptr;       // structure pointer

    ptr = &s;   // pointer এ structure variable এর address রাখা হলো

    // Input নেওয়া হলো
    printf("Enter name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Output দেখানো হলো
    printf("\n--- Student Information ---\n");
    printf("Name  : %s", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

