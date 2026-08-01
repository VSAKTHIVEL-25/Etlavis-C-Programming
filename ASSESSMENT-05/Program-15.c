
#include <stdio.h>
int main()
{
    int x,y=1,z;
    printf("Enter number : ");
    scanf("%d",&x);
    if(x%2==1)
    {
        for(z=x;z!=0;)
        {
            y=y*10;
            z=z/10;
        }
        y=y/10;
        printf("Result = %d%d",(x/y)-1,x%y);
    }
    else
    {
        printf("\nResult = %d",x);
    }
    return 0;
}