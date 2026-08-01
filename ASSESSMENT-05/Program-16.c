
#include <stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter Number : ");
    scanf("%d",&x);
    for(y=2;y<=x/2;y++)
    {
        if(x%y==0)
        {
            z=1;
            printf("\nNot Prime");
            break;
        }
    }
    if(z==0)
    {
        printf("\nPrime");
    }
    return 0;
}