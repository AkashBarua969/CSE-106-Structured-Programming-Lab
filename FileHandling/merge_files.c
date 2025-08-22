// Question: Write a C program to merge two files.

#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergeFile;
    char fname1[50], fname2[50], mergeName[50];
    char ch;

    // Input file names
    printf("Enter first file name: ");
    scanf("%s", fname1);

    printf("Enter second file name: ");
    scanf("%s", fname2);

    printf("Enter name for merged file: ");
    scanf("%s", mergeName);

    // Open first file
    file1 = fopen(fname1, "r");
    if(file1 == NULL) {
        printf("Error opening first file!\n");
        return 1;
    }

    // Open second file
    file2 = fopen(fname2, "r");
    if(file2 == NULL) {
        printf("Error opening second file!\n");
        fclose(file1);
        return 1;
    }

    // Open merged file
    mergeFile = fopen(mergeName, "w");
    if(mergeFile == NULL) {
        printf("Error creating merged file!\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy content of first file
    while((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergeFile);
    }

    // Copy content of second file
    while((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergeFile);
    }

    printf("\nFiles '%s' and '%s' merged successfully into '%s'.\n", fname1, fname2, mergeName);

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(mergeFile);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

