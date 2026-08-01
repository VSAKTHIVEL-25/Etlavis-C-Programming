
#include <stdio.h>
int main()
{
    int x,y=0;
    for(x=5;x>0;x--)
    {
        y=x+y;
    }
    printf("\n%d",y);
    return 0;
}