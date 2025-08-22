// Question: Write a C program to check whether a string is palindrome or not.
//
// Formula:
// Initialize left = 0, right = length-1
// While left < right:
//   If str[left] != str[right] -> Not palindrome
//   Else -> left++, right--
// If loop completes -> Palindrome

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // spaces handle করতে fgets ব্যবহার

    // string length calculate করা
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int left = 0, right = length - 1;
    int isPalindrome = 1;  // assume palindrome

    while(left < right) {
        if(str[left] != str[right]) {
            isPalindrome = 0;  // not palindrome
            break;
        }
        left++;
        right--;
    }

    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

