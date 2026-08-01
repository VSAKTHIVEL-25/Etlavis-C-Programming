
#include <stdio.h>
int main()
{
    int a,b=0,x,y,z=0;
    printf("Enter Number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        a=x%10;
        for(y=2;y<=a/2;y++)
        {
            if(a%y==0)
            {
                z=1;
            }
        }
        if(z==0 && a!=1)
        {
            b++;
        }
        x=x/10;
        z=0;
    }
    printf("\nTotal number of single digit Prime numbers = %d",b);
    return 0;
}