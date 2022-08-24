#include<stdio.h>

int main() {
    float marks;

    printf("Enter your marks : ");
    scanf("%f", &marks);

    if (marks >= 80)
    {
        printf("%f is A+\n", marks);
    } else if (marks >= 70) {
        printf("%f is A\n", marks);
    } else if (marks >= 60) {
        printf("%f is A-\n", marks);
    } else if (marks >= 50) {
        printf("%f is B\n", marks);
    } else if (marks >= 40) {
        printf("%f is C\n", marks);
    } else if (marks >= 33) {
        printf("%f is D\n", marks);
    } else {
        printf("%f is Fail\n", marks);
    }

    return 0;
    
}