
#include <stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter Number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        y=x%10;
        if(y%2==1)
        {
                z++;
        }
        x=x/10;
    }
    printf("\nTotal number of single digit Odd numbers = %d",z);
    return 0;
}