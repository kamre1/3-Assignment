#include<stdio.h>
int main()
{

    int A;

    printf("Enter Your Number:");
    scanf("%d",&A);

    if(A>0)
        printf("Number Positive\n");
    else if (A<0)
        printf("Number Negative\n");
    else
        printf("Number Zero ");

    return 0;

}
