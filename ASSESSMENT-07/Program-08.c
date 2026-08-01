
#include <stdio.h>

void disp_2digit_even_sum6();
int main()
{
    disp_2digit_even_sum6();
    return 0;
}
void disp_2digit_even_sum6()
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
}