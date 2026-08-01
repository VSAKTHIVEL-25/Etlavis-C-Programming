
#include <stdio.h>
int main()
{
    int x,y=1;
    for(x=11;x<100;x++)
    {
        if((x/10)+(x%10)==6)
        {
            if(x%2==0)
            {
                printf("\n%d",x);
            }
        }
    }
    return 0;
}