
#include <stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter Number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        y=x%10;
        if(y==1 || y==4 || y==9)
        {
            z++;
        }
        x=x/10;
    }
    printf("\nTotal number of single digit perfect square numbers = %d",z);
    return 0;
}