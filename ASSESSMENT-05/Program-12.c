
#include <stdio.h>
int main()
{
    int x,y=0;
    printf("Enter number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        y=x%10+y;
        x=x/10;

    }
    printf("\nSum of all digits = %d",y);
    return 0;
}