
#include <stdio.h>

void disp_biggest_4digit_div7_9();
int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}
void disp_biggest_4digit_div7_9()
{
    int x;
    for(x=9999;x>1000;x--)
    {
        if(x%7==0 && x%9==0)
        {
            break;
        }
    }
    printf("\nBiggest four digit number divided by 7 and 9 = %d",x);
}
 