// Question: Write a C program to pass pointer to a function.

#include <stdio.h>

// Function definition (pointer parameter নেয়)
void updateValue(int *p) {
    *p = *p + 10;  // pointer dereference করে value পরিবর্তন করা হলো
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call: num = %d\n", num);

    updateValue(&num);   // function এ address পাঠানো হলো

    printf("After function call: num = %d\n", num);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

