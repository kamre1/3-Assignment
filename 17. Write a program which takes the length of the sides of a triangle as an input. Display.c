#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Your Number:");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b>c)&& (a+c>b)&& (b+c>a))

       printf("Triangle is Valid");         // valid input --> 10 20 20
    else
        printf("Triangle is Not Valid");   //  invalid input --> 10 20 40

    return 0;


}
