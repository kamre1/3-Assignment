#include<stdio.h>
int main()
{
    int a;

    printf("Enter Your Number: ");
    scanf("%d",&a);

    if((a%3==0) && (a%2==0))
        printf("Given Number is Divisible by 3 and 2 \n");
    else
        printf(" Given Number is Not Divisible by 3 and 2");

    return 0;
}
