
#include <stdio.h>
#include "NumClass.h"

// my function
int factorial(int x);

int factorial(int x)
{
    if(x == 0|| x==1)
    return 1;
    return (x *factorial(x-1));
}

/* will return if a number is prime*/
int isPrime(int a) {

    if (a < 1) 
        return 0; // Not a prime number
    if(a==1)
        return 1;// 1 is a prime number 

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int a) 
{
    int ans = a;
    int digit;
    int sum = 0;

    while(a>0)
    {
        digit=a%10;
        sum=sum+factorial(digit);
        a = a/10;
    }
    return(ans == sum);

}

