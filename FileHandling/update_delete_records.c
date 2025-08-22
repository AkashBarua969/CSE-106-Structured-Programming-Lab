// Question: Write a C program to update and delete records from a file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to update a student record
void updateRecord(const char *filename, int roll) {
    FILE *fp = fopen(filename, "r+b"); // read+write mode
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Student s;
    int found = 0;

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.roll == roll) {
            printf("Enter new name: ");
            getchar(); // remove newline
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = '\0';

            printf("Enter new marks: ");
            scanf("%f", &s.marks);

            fseek(fp, -sizeof(s), SEEK_CUR); // move pointer back
            fwrite(&s, sizeof(s), 1, fp);
            found = 1;
            printf("Record updated successfully.\n");
            break;
        }
    }

    if(!found) {
        printf("Record with roll %d not found.\n", roll);
    }

    fclose(fp);
}

// Function to delete a student record
void deleteRecord(const char *filename, int roll) {
    FILE *fp = fopen(filename, "rb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    FILE *temp = fopen("temp.dat", "wb");
    if(temp == NULL) {
        printf("Error creating temp file!\n");
        fclose(fp);
        return;
    }

    struct Student s;
    int found = 0;

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.roll == roll) {
            found = 1; // skip writing this record
            continue;
        }
        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove(filename);           // delete original file
    rename("temp.dat", filename); // rename temp to original

    if(found)
        printf("Record deleted successfully.\n");
    else
        printf("Record with roll %d not found.\n", roll);
}

int main() {
    char filename[50];
    int choice, roll;

    printf("Enter the file name: ");
    scanf("%s", filename);

    do {
        printf("\n1. Update Record\n2. Delete Record\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter roll number to update: ");
                scanf("%d", &roll);
                updateRecord(filename, roll);
                break;
            case 2:
                printf("Enter roll number to delete: ");
                scanf("%d", &roll);
                deleteRecord(filename, roll);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

