
#include <stdio.h>

void disp_2digit_odd_below20();
int main()
{
    disp_2digit_odd_below20();
    return 0;
}
void disp_2digit_odd_below20()
{
    int x,y=11;
    for(x=0;x<5;x++)
    {
        printf("\n%d",y);
        y=y+2;
    }
}
 
