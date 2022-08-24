#include<stdio.h>

int main() {
    int year;

    printf("Written your year : ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is lear year", year);
    } else {
        printf("%d is not lear year", year);
    }
    
    // if (year % 400 == 0)
    // {
    //     printf("%d is lear year", year);
    // } else if (year % 4 == 0 && year % 100 != 0)  {
    //     printf("%d is lear year", year);
    // } else {
    //     printf("%d is not lear year", year);
    // }
    
}