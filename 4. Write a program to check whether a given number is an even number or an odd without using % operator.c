#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Number :");
    scanf("%d",&n);

    if(n&1)  // n ka binary nikal na hai or bitwise and karda na hai if LSB=1 then odd or LSB=0 then even
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }
    return 0;



}
