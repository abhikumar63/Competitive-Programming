//WAP to demonstrate the 2D pointer notations for a matrix of integers
#include<stdio.h>
int main()
{
    int x=5,y=2;
    char op='+';
    switch (op)
    {
    case '+':x+=y;
    case '*':x*=y;
        break;
    
    default:x+=1;
    }
    printf("%d",x);
    return 0;
}