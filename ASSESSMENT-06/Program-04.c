
#include <stdio.h>
int main()
{
    int x=6,y=0;
    while(x>=1)
    {
        y=x+y;
        x--;
    }
    printf("\n%d",y);
    return 0;
}