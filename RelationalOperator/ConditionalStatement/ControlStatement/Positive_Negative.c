#include<stdio.h>

int main() {
    int num;

    printf("Enter your number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is positive number\n", num);
    } else if (num < 0) {
        printf("%d is negative number\n", num);
    } else {
        printf("%d is Zero\n", num);
    }
    
}