
#include <stdio.h>
int main()
{
    int x,y=2,z=0;
    printf("Enter Number : ");
    scanf("%d",&x);
    while(y<=x/2)
    {
        if(x%y==0)
        {
            z=1;
            printf("\nNot Prime");
            break;
        }
        y++;
    }
    if(z==0)
    {
        printf("\nPrime");
    }
    z=(x/10)+(x%10);
    if(z==14)
    {
        printf(" & sum of digits is 14");
    }
    else
    {
        printf(" & sum of digits is not 14");
    }
    return 0;
}