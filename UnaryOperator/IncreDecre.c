#include<stdio.h>

int main() {
    int x = 10;

    printf("Post increment: %d\n", x++);//x = 10;
    printf("After post increment: %d\n", x); // x = 11;
    printf("Pre increment: %d\n", ++x); // x = 12;
    printf("After pre increment: %d\n", x); // x = 12;
    printf("Post decrement: %d\n", x--); // x = 12;
    printf("After post decrement: %d\n", x); // x = 11;
    printf("Pre decrement: %d\n", --x);      // x = 10;
}