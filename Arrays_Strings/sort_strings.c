// Question: Write a C program to sort strings in dictionary order.
//
// Formula:
// For each string i:
//   Compare with string j
//   If str[i] > str[j], swap

#include <stdio.h>
#include <string.h>  // for strcmp() and strcpy()

int main() {
    int n, i, j;
    char temp[100];

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();  // newline remove করার জন্য

    char str[n][100];

    // string input
    printf("Enter the strings:\n");
    for(i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        // fgets newline remove
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    // sorting (bubble sort)
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                // swap strings
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // print sorted strings
    printf("Strings in dictionary order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

