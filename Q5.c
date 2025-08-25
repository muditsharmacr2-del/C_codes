//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{
float c,far;
printf("Enter the temperature in celcius\n");
scanf("%f",&c);
far=(1.8*c)+32.00;
printf("Temperature in farhenheit %f\n",far);
return 0;
}


