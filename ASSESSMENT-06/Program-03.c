
#include <stdio.h>
int main()
{
    int x=1,y=0;
    while(x<=5)
    {
        y=x+y;
        x++;
    }
    printf("\n%d",y);
    return 0;
}