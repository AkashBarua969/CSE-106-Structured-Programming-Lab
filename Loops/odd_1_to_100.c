// Question: Write a C program to print odd numbers between 1 to 100.

#include <stdio.h>   // input-output library

int main() {
    int i;

    // loop ব্যবহার করে 1 থেকে 100 পর্যন্ত odd সংখ্যা প্রিন্ট
    for(i = 1; i <= 100; i++) {
        if(i % 2 != 0) {   // যদি সংখ্যা 2 দিয়ে ভাগ করলে remainder 0 না হয়, তাহলে odd
            printf("%d\n", i);
        }
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

