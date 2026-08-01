
#include <stdio.h>

int disp_biggest_4digit_div7_9();
int main()
{
    printf("\nBiggest four digit number divided by 7 and 9 = %d",disp_biggest_4digit_div7_9());
    return 0;
}
int disp_biggest_4digit_div7_9()
{
    int x;
    for(x=9999;x>1000;x--)
    {
        if(x%7==0 && x%9==0)
        {
            break;
        }
    }
    return(x);
}
 