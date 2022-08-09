#include<stdio.h>

int main() {
    int num1, num2, sum;
    float avg;

    printf("Enter your two number : ");
    scanf("\n%d %d", &num1, &num2);

    sum = num1 + num2;
    avg = (float)sum / 2;

    printf("Sum of those number is : %d\n Avg of those number is : %.2f\n", sum, avg);

    return 0;
}