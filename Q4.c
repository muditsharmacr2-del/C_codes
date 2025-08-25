//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main()
{
int a,c,r;
printf("Enter the radius of circle\n");
scanf("%d",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("Area of the circle %d\n",a);
printf("Area of the circle %d\n",c);
return 0;
}



