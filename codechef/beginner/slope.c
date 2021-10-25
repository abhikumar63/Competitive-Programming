#include<stdio.h>
int main()
{
    float x1,x2;
    float y1,y2;
    float m,c;

    printf("Value of x1 and x2=");
    scanf("%f%f",&x1,&y1);
    printf("Value of y1 and y2=");
    scanf("%f%f",&x2,&y2);
   
    m = (y2-y1)/(x2-x1);

    printf("value of slope=%f\n",m);

    printf("Enter the value of c:");
    scanf("%f",c);

    printf("\ny=%fx",m);
    printf("+%4.2f",c);
    return 0;
}