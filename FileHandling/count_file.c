// Question: Write a C program to count characters, words, and lines in a file.

#include <stdio.h>
#include <ctype.h>  // for isspace()

int main() {
    FILE *fp;
    char filename[50], ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;  // flag to track word

    // Input file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        charCount++;  // count every character

        if(ch == '\n') {
            lineCount++;  // count lines
        }

        if(isspace(ch)) {
            inWord = 0;  // end of a word
        } else if(inWord == 0) {
            inWord = 1;
            wordCount++;  // new word found
        }
    }

    // Close file
    fclose(fp);

    printf("\nFile '%s' contains:\n", filename);
    printf("Characters: %d\n", charCount);
    printf("Words     : %d\n", wordCount);
    printf("Lines     : %d\n", lineCount);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

