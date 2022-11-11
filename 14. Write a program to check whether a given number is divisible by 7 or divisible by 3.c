#include<stdio.h>
int main()
{
    int K;
    printf("Enter Your Number:");
    scanf("%d",&K);

    if((K%7==0)&& (K%3==0))
        printf("Given Number is Divisible by 7 and 3");
    else
        printf("Given Number is not Divisible by 7 and 3");

    return 0;
}
