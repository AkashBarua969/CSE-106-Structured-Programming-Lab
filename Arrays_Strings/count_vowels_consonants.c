// Question: Write a C program to count vowels and consonants in a string.
//
// Formula:
// For each character in string:
//   If character is a vowel (a, e, i, o, u) -> vowel count++
//   Else if character is an alphabet -> consonant count++

#include <stdio.h>
#include <ctype.h>  // toupper() function

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    // ইউজার থেকে string ইনপুট নেয়া
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // scanf("%s") spaces handle করতে পারে না

    // string iterate করা
    for(i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]);  // case-insensitive করার জন্য

        if(ch >= 'A' && ch <= 'Z') {  // alphabet check
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

