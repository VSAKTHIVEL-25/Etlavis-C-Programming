
#include <stdio.h>
int main()
{
    int x,y=0;
    for(x=71;x<=79;x+=2)
    {
        y=x+y;
    }
    printf("\nResult = %d",y);
    return 0;
}