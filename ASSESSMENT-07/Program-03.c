
#include <stdio.h>

void disp_sum();
int main()
{
    disp_sum();
    return 0;
}
void disp_sum()
{
    int x,y=0;
    for(x=5;x>0;x--)
    {
        y=x+y;
    }
    printf("\n%d",y);
}
    