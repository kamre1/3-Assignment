#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Your Number:");
    scanf("%d %d",&num1,&num2);

    if(num1==num2)
        printf("num1 and num2 are same");
    else if(num1 >num2)
        printf("num1 is greater");
    else
        printf("num2 is greater");

    return 0;

}
