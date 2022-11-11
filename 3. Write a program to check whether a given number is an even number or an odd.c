#include<stdio.h>
int main()
{
    int y;
    printf("Enter Your Number:");
    scanf("%d",&y);

    if((y%2)==0)
    {
        printf("Enter Your Number is  Even");
    }
    else
    {
        printf(" Enter Your Number is Odd");
    }
    return 0;
}
