// Question: Write a C program to append data into a file.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], text[200];

    // Input file name
    printf("Enter the file name to append data: ");
    scanf("%s", filename);
    getchar(); // remove newline

    // Open file in append mode
    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input text to append
    printf("Enter text to append into the file:\n");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fprintf(fp, "%s", text);

    // Close file
    fclose(fp);

    printf("Data appended successfully into file '%s'.\n", filename);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

