#include<stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter your three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Num1(%d) Large number", num1);
    } else if (num2 > num3 && num2 > num1) {
        printf("Num2(%d) Large number", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("Num3(%d) Large number", num3);
    } else {
        printf("All are Equal");
    }
    
}