#include <stdio.h>
#include "NumClass.h"

int main() {
   int num1=0, num2=0; 
   
   // Enter 2 positive numbers
   scanf("%d %d", &num1, &num2);

   // Swap
   if (num1 > num2) {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }

   // Check Armstrong numbers
   printf("The Armstrong numbers are: ");
   for (int i = num1; i <= num2; i++) {
      if (isArmstrong(i)) {
         printf(" %d", i);
      }
   }

   // Check Palindrome numbers
   printf("\nThe Palindrome numbers are: ");
   for (int i = num1; i <=num2; i++) {
      if (isPalindrome(i)) {
         printf("%d ", i);
      }
   }

   // Check Prime numbers
   printf("\nThe Prime numbers are: ");
   for (int i = num1; i <= num2; i++) {
      if (isPrime(i)) {
         printf("%d ", i);
      }
   }

   // Check Strong numbers
   printf("\nThe Strong numbers are: ");
   for (int i = num1; i <=num2; i++) {
      if (isStrong(i)) {
         printf("%d ", i);// Print the number
      }
   }

   printf("\n");
   return 0;
}

