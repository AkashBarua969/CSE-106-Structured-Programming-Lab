// Question: Write a C program to store information of multiple students using array of structures.

#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();  // newline remove করার জন্য

    struct Student s[n];

    // input for each student
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';  // newline remove

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
        getchar();  // newline remove before next input
    }

    // display student information
    printf("\n--- Students Information ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name : %s\n", s[i].name);
        printf("Roll : %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

