#include<stdio.h>

int main() {
    int num1, num2, num3, sum;
    float avg;

    printf("Enter 3 integer numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / (float)3;

    printf("Sum = %d\n and Avg = %f\n", sum, avg);
}