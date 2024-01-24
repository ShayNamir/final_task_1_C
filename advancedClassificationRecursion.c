#include <stdio.h>
#include "NumClass.h"

// Function to calculate power
int power(int numberD, int digit) {
    int i, sum = 1;
    for (i = 0; i < numberD; i++) {
        sum = sum * digit;
    }
    return sum;
}

// Function to count digits using recursion
int countDigits(int a) {
    if (a == 0) {
        return 0;
    } else {
        return 1 + countDigits(a / 10);
    }
}

// Recursive function to check if a number is a palindrome
int isPalindromeHelper(int num, int original) { // Fix: Added 'original' as an argument
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}

// Recursive function to check if a number is a strong number
int getSumOfDigits(int a, int p)
{
    if (a == 0) 
        return 0;
    return (power(p, a % 10) + getSumOfDigits(a / 10, p));
}

// Function to check if a number is an Armstrong number
int isArmstrong(int a)
{
    return ((a== getSumOfDigits(a, countDigits(a)))?1:0);
}

// Function to check if a number is a palindrome
int isPalindrome(int a) {
    if (a < 0)
        return 0;  // Negative numbers are not palindromes

    return isPalindromeHelper(a, a); // Fix: Added 'a' as an argument
}

