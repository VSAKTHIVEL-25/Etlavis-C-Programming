
#include <stdio.h>
int main()
{
    int a,x,y,z=0;
    printf("Enter Number : ");
    scanf("%d",&x);
    a=x;
    for(;a!=0;)
    {
        y=a%100;
        if(y>=10)
        {
            if(y%2==1)
            {
                z++;
            }
        }
        a=a/100;
    }
    a=x/10;
    for(;a!=0;)
    {
        y=a%100;
        if(y>=10)
        {
            if(y%2==1)
            {
                z++;
            }
        }
        a=a/100;
    }
    printf("\nTotal number of two digit Odd numbers = %d",z);
    return 0;
}