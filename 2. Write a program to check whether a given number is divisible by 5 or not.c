#include<stdio.h>
int main()
{
    int x;
    printf("Enter Your Number:");
    scanf("%d",&x);

    if((x%5)==0)
    {
        printf("Enter Your Number is Divisible by 5");
    }
    else
    {
        printf("Enter Your Number is not Divisible by 5");

    }
    return 0;
}
