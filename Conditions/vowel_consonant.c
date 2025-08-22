// Question: Write a C program to check whether a character is a vowel or consonant.
//
// Formula:
// If character is a, e, i, o, u (or uppercase A, E, I, O, U) -> Vowel
// Else -> Consonant

#include <stdio.h>   // input-output library

int main() {
    char ch;

    // ইউজার থেকে character ইনপুট নেয়া
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Vowel বা Consonant চেক করা
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel.\n", ch);
    } else {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

