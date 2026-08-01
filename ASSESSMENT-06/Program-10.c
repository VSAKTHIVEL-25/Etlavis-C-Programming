
#include <stdio.h>
int main()
{
    int x=71,y=0;
    while(x<=79)
    {
        y=x+y;
        x=x+2;
    }
    printf("\nResult = %d",y);
    return 0;
}