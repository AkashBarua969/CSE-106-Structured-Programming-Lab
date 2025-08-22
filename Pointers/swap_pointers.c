// Question: Write a C program to swap two numbers using pointers.

#include <stdio.h>

// function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // *a মানে a pointer যে variable কে point করছে তার value
    *a = *b;     // *b এর মান a তে কপি করা হলো
    *b = temp;   // temp এর মান b তে কপি করা হলো
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);  // address পাঠানো হলো, যাতে আসল ভেরিয়েবল বদলানো যায়

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

