// Question: Write a C program to read data from a file.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

    // Input file name
    printf("Enter the file name to read: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file '%s':\n", filename);

    // Read and display each character until EOF
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(fp);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

