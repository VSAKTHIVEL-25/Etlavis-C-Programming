
#include <stdio.h>
int main()
{
    int x,y=1,z;
    printf("Enter number : ");
    scanf("%d",&x);
    for(z=x;z!=0;)
    {
        y=y*10;
        z=z/10;
    }
    y=y/10;
    printf("\nResult = %d%d%d",x%10,(x%y)/10,x/y);
    return 0;
}