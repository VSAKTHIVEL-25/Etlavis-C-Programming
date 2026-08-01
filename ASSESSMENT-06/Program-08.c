
#include <stdio.h>
int main()
{
    int x=11,y=1;
    while(x<100)
    {
        if((x/10)+(x%10)==6)
        {
            if(x%2==0)
            {
                printf("\n%d",x);
            }
        }
        x++;
    }
    return 0;
}