
#include<stdio.h>
int main()
{

    int Month_Number;
    printf("Enter your month_number:");
    scanf("%d",&Month_Number);

     if(Month_Number==1 || Month_Number==3 || Month_Number==5 || Month_Number==8 || Month_Number==10 || Month_Number==12)

        printf(" 31 Days Month \n");
     else if (Month_Number==2)
        printf(" 28/29 Days Month");

     else
        printf(" 30 Days Month ");

     return 0;

}
