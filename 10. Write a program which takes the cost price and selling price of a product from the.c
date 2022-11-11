#include<stdio.h>
int main()
{
    float sp, cp , percentage;

    printf("Enter Your Price:");
    scanf("%f %f", &sp,&cp);

    if(sp-cp>0)
        printf("Profit\n");
    else
        printf("Loss\n");

    percentage = sp/cp*100;

    printf("Your percentage %f", percentage);


    return 0;
}
