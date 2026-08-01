
#include <stdio.h>
int main()
{
    int x,y=0;
    for(x=11;x<100;x++)
    {
        if(x%10==5)
        {
            y=x+y;
        }
    }
    printf("Result = %d",y);
    return 0;
}