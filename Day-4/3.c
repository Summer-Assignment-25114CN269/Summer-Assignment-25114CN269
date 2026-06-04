#include <stdio.h>
#include <math.h>

int main (){
    int num, originalnum, remainder, digits = 0;
    double result = 0.0;

    printf("Enter an integer:");
    scanf("%d", &num);

    originalnum = num;

    int temp = num;
    while (temp != 0) {
     temp/= 10;
     digits++;
    }

    temp = num;
    while (temp!= 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)result == num) 
        printf("%d is an Armstrong number.\n", num);
     else 
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}