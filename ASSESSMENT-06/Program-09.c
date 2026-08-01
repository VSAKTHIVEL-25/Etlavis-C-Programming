
#include <stdio.h>
int main()
{
    int x=11,y=0;
    while(x<100)
    {
        if(x%10==5)
        {
            y=x+y;
        }
        x++;
    }
    printf("Result = %d",y);
    return 0;
}