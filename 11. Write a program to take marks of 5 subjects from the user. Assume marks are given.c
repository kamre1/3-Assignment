#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5, TotalMarks,percentage;

    printf("Enter Your Marks:\n");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);


    TotalMarks = sub1+ sub2+ sub3+ sub4+ sub5;

    printf("your total marks  %.0f \n", TotalMarks);

   percentage = TotalMarks/500*100;

   printf("your Totalmarks Percentage : %f \n",percentage);

   if(percentage>33)

       printf("Passed");
   else
       printf("Fail");

   return 0;




}
