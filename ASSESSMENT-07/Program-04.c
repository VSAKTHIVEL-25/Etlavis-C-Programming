
#include <stdio.h>

void disp_rsum();
int main()
{
    disp_rsum();
    return 0;
}
void disp_rsum()
{
    int x,y=0;
    for(x=6;x>=1;x--)
    {
        y=x+y;
    }
    printf("\n%d",y);
}
    