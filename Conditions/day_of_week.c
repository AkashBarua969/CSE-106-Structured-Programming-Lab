// Question: Write a C program to display the day of the week using switch-case.
//
// Formula:
// 1 -> Sunday
// 2 -> Monday
// 3 -> Tuesday
// 4 -> Wednesday
// 5 -> Thursday
// 6 -> Friday
// 7 -> Saturday

#include <stdio.h>   // input-output library

int main() {
    int day;

    // ইউজার থেকে day ইনপুট নেয়া
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    // switch-case ব্যবহার করে দিন দেখানো
    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number! Please enter 1-7.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

