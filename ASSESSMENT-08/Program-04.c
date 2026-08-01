
#include<stdio.h>
int disp_2digit_odd_sum_tens7();
int main()
{
    printf("Result = %d",disp_2digit_odd_sum_tens7());
    return 0;
}
int disp_2digit_odd_sum_tens7()
{
    int y=0;
    for(int x=71;x<=79;x+=2)
    {
        y=x+y;
    }
    return (y); 
}