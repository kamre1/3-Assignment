#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter Alphabet:");
    scanf("%c",&alphabet);

    if(alphabet>='a' && alphabet<='z')
        printf("LowerCase Alphabet \n");
    else if(alphabet>='A' && alphabet<='Z')
        printf("UpperCase Alphabet\n");
    else if(alphabet>='0' && alphabet<= '9')
        printf("Alphabet Digit \n");
    else
        printf("Special Symbol");

    return 0;

}
