
#include<stdio.h>
int main()
{
    double a,b,c,discriminat;

    printf("Enter your Number:\n ");
    scanf("%lf %lf %lf ",&a, &b, &c);

    discriminat=b * b - 4 * a * c;

    if(discriminat>0)
        printf("Real Or Distinct");
    else if(discriminat==0)
        printf("Roots are equal");
    else
        printf("imaginary Roots");

    return 0;
}
