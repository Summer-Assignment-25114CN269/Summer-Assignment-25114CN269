#include<stdio.h>
#include<math.h>

int main(){
    int lower, upper, i, temp, remainder, digits, sum;

    printf("Enter the lower limit:");
    scanf("%d", &lower);
    printf("Enter the upper limit:");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for(i = lower; i <= upper; i++){
        temp = i;
        digits = 0;

        while(temp != 0){
            temp /= 10;
            digits++;
        }

        temp = i;
        sum = 0;

        while(temp != 0){
            remainder = temp % 10;
            sum +=  (int)(pow(remainder, digits) + 0.5);
            temp /= 10;
        }

        if(sum == i){
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}