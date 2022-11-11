#include<stdio.h>
int main()
{
    int num;
    printf("Given Number is:");
    scanf("%d", &num);

    if((num>99) && (num<1000))
    {
        printf("It is Three Digit Number:");

    }
    else
    {
        printf("It is Not Three Digit Number:");

    }
    return 0;
}

