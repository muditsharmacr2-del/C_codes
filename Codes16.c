#include<stdio.h>
int main()
{
int a,fac=1;
printf("Enter the number:");
scanf("%d",&a);
for(int i=a;i>0;i--)
{
fac=fac*i;
}
printf("%d is the factorial of the number",fac);
return 0;
}

