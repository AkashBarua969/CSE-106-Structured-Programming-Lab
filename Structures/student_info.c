// Question: Write a C program to store and display information of a student (name, roll, marks).

#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    // student input
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);  // spaces handle করতে fgets
    s.name[strcspn(s.name, "\n")] = '\0';  // newline remove

    printf("Enter student roll number: ");
    scanf("%d", &s.roll);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    // student information display
    printf("\n--- Student Information ---\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

