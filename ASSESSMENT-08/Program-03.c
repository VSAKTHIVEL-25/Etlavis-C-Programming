
#include<stdio.h>
int disp_2digit_ones5();
int main()
{
    printf("Result = %d",disp_2digit_ones5());
    return 0;

}
int disp_2digit_ones5()
{
    int x=15,y=0;
    for(;x<=95;x+=10)
    {
        y=x+y;
    }
    return (y);

}