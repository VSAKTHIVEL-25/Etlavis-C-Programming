
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
            if(y==16 || y==25 || y==36 || y==49 || y==64 || y==81)
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
            if(y==16 || y==25 || y==36 || y==49 || y==64 || y==81)
            {
                z++;
            }
        }
        a=a/100;
    }
    printf("\nTotal number of two digit perfect square numbers = %d",z);
    return 0;
}