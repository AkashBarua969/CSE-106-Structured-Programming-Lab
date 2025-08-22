// Question: Write a C program to create and write into a file.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], text[200];

    // Input file name
    printf("Enter the file name to create: ");
    scanf("%s", filename);
    getchar(); // remove newline

    // Open file in write mode
    fp = fopen(filename, "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input text to write into file
    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    // Write to file
    fprintf(fp, "%s", text);

    // Close file
    fclose(fp);

    printf("File '%s' created and data written successfully.\n", filename);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

