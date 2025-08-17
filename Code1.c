#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three number\n");
    scanf("%d\n,%d\n,%d\n",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("%d is the gratest number",num1);
    }
    else if(num2>num3 && num2>num1)
{
    printf("%d is greatest number",num2);
}
else
{
    printf("%d is the greatest number",num3);
}
return 0;
}