/*Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);


    a = a + b;  // step 1
    b = a - b;  // step 2
    a = a - b;  // step 3

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}




