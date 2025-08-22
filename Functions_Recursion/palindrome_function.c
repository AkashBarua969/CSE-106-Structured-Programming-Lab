// Question: Write a C program to check palindrome using function.
//
// Formula:
// isPalindrome(str):
//   left = 0, right = length-1
//   while left < right:
//       if str[left] != str[right] -> return 0
//       else -> left++, right--
//   return 1

#include <stdio.h>
#include <string.h>

// Function to check palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right) {
        if(str[left] != str[right]) {
            return 0;  // not palindrome
        }
        left++;
        right--;
    }
    return 1;  // palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    if(isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

