#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);

c=a;
a=b;
b=c;
printf("Interchange varables are a:");
printf("%d\n",a);

printf("Interchange varables are b:");
printf("%d\n",b);
return 0;
}

