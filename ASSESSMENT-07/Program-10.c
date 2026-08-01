
#include <stdio.h>

void disp_2digit_odd_sum_tens7();
int main()
{
    disp_2digit_odd_sum_tens7();
    return 0;
}
void disp_2digit_odd_sum_tens7()
{
    int x,y=0;
    for(x=71;x<=79;x+=2)
    {
        y=x+y;
    }
    printf("\nResult = %d",y);
}