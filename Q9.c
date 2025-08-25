//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>  

int main() {
    double P, R, T;   
    double SI, CI, A;

    printf("Enter Principal: ");
    scanf("%lf", &P);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &R);

    printf("Enter Time (in years): ");
    scanf("%lf", &T);

    
    SI = (P * R * T) / 100.0;

   
    A = P * pow((1 + R / 100.0), T);  
    CI = A - P;

    
    printf("\n--- Interest Calculation ---\n");
    printf("Simple Interest = %.2lf\n", SI);
    printf("Compound Interest = %.2lf\n", CI);

    return 0;
}

