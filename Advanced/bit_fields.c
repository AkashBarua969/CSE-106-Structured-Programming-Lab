// Question: Write a C program to demonstrate bit fields in structures.

#include <stdio.h>

// Structure with bit fields
struct Flags {
    unsigned int isBold : 1;     // 1 bit
    unsigned int isItalic : 1;   // 1 bit
    unsigned int alignment : 2;  // 2 bits (0=Left, 1=Right, 2=Center, 3=Justify)
};

int main() {
    struct Flags f;

    // Assign values to bit fields
    f.isBold = 1;
    f.isItalic = 0;
    f.alignment = 2;

    // Display bit field values
    printf("Bold: %u\n", f.isBold);
    printf("Italic: %u\n", f.isItalic);
    printf("Alignment: %u\n", f.alignment);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

