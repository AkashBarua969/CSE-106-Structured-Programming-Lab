// Question: Write a C program to store student records in a file.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    char filename[50];
    char choice;

    // Input file name
    printf("Enter the file name to store student records: ");
    scanf("%s", filename);
    getchar();  // remove newline

    // Open file in append mode to add multiple records
    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        // Input student data
        printf("\nEnter student name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = '\0';  // remove newline

        printf("Enter student roll number: ");
        scanf("%d", &s.roll);

        printf("Enter student marks: ");
        scanf("%f", &s.marks);
        getchar();  // remove newline

        // Write structure to file
        fwrite(&s, sizeof(s), 1, fp);

        printf("Do you want to add another record? (y/n): ");
        scanf("%c", &choice);
        getchar();  // remove newline
    } while(choice == 'y' || choice == 'Y');

    fclose(fp);

    printf("\nStudent records stored successfully in '%s'.\n", filename);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

