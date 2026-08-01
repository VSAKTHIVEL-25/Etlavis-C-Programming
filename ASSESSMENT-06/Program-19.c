
#include <stdio.h>
int main()
{
    int x,y=2,z=0;
    printf("Enter a four digit Number : ");
    scanf("%d",&x);
    x=(((x/100)%10)*10)+(x/10)%10;
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
    return 0;
}