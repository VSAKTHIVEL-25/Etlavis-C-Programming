
#include <stdio.h>

void disp_odd();
int main()
{
    disp_odd();
    return 0;
}
void disp_odd()
{
    int x,y=1;
    for(x=0;x<5;x++)
    {
        printf("\n%d",y);
        y=y+2;
    }
}
   