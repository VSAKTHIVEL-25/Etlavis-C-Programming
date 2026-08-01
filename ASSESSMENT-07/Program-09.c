
#include <stdio.h>

void disp_2digit_ones5();
int main()
{
    disp_2digit_ones5();
    return 0;
}
void disp_2digit_ones5()
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
}