
#include <stdio.h>

void disp_2digit_odd_sum7();
int main()
{
    disp_2digit_odd_sum7();
    return 0;
}
void disp_2digit_odd_sum7()
{
    int x,y=1;
    for(x=11;x<100;x++)
    {
        if((x/10)+(x%10)==7)
        {
            if(x%2==1)
            {
                printf("\n%d",x);
            }
        }
    }
}
 