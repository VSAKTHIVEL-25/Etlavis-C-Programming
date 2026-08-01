
#include <stdio.h>
int main()
{
    int a,b,c,x,y,z=0;
    printf("Enter number 1 : ");
    scanf("%d",&x);
    printf("\nEnter number 2 : ");
    scanf("%d",&y);
    if(x>y)
    {
        a=x;
        b=y;
    }
    else
    {
        b=x;
        a=y;
    }
    while(c>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("\nLCM of two numbers = %d",(x*y)/a);
    return 0;
}