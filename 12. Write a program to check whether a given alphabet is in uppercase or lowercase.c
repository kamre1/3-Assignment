#include<stdio.h>
int main()
{
    char alphabet;

    printf("Enter Character:");
    scanf("%c", &alphabet);

    if( (alphabet>='a') && (alphabet<='z'))
        printf("LowerCase Alphabet");
    else
        printf("UpperCase Alphabet");

        return 0;

}
