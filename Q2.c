//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
int a,b,c,d,p,q;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
c=a+b;
if(a>b)
d=a-b;
else
d=b-a;
p=a*b;
q=a/b;
printf("sum of two numbers is %d\n",c);
printf("diffrence of two numbers is %d\n",d);
printf("product of two number  is %d\n",p);
printf("quotient of two numbersis %d\n",q);
return 0;
}

