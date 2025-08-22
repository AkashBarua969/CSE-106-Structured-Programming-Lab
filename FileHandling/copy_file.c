// Question: Write a C program to copy contents of one file to another.

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char source[50], dest[50];
    char ch;

    // Input file names
    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    // Open source file in read mode
    sourceFile = fopen(source, "r");
    if(sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(dest, "w");
    if(destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content character by character
    while((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("\nFile copied successfully from '%s' to '%s'.\n", source, dest);

    // Close files
    fclose(sourceFile);
    fclose(destFile);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

