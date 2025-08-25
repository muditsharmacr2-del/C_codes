#include <stdio.h>

int main() {
    int num, originalNum, remainder;

    printf("Armstrong numbers between 1 and 500 are:\n");

   for (num = 1; num <= 500; num++) {
        originalNum = num;
        int result = 0;

       
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder; // cube without pow()
            originalNum /= 10;
        }

        
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
//take n number from user,say n,and print first n armstrong number
