#include<stdio.h>

int main() {
    char ch;

    printf("Enter  any letter : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel ", ch);
    } else {
        printf("%c is consonant ", ch);
    }
    
}