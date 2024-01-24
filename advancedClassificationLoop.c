#include <stdio.h>
#include "NumClass.h"

// Declare functions
int numberD(int a);
int power(int numberD, int digit);
int isArmstrong(int a);
int isPalindrome(int a);

// Your numberD function definition
int numberD(int a) {
    int digitCount = 0;
    while (a > 0) {
        digitCount++;
        a = a / 10;
    } 
    return digitCount; 
}

// Your power function definition
int power(int numberD, int digit) {
    int i, sum = 1;
    for (i = 0; i < numberD; i++) {
        sum = sum * digit;
    }
    return sum;
}

// Your isArmstrong function definition
int isArmstrong(int a) {
    int num = a;
    int digits = numberD(a);
    
    int d = 0, sum = 0, ans = num;
    while (num > 0) {
        d = num % 10;
        sum = sum + power(digits, d);
        num = num / 10;
    }
    return (ans == sum);
}

// Your isPalindrome function definition
int isPalindrome(int a) {
    int digits = numberD(a);

    if (digits == 1)
        return 1;

    int temp = a;
    int reverse = 0;

    while (temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    return (a == reverse);
}
