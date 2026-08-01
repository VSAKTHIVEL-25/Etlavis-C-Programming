
#include<stdio.h>

int disp_rsum();
int main()
{
    printf("Sum of 6 to 1 = %d",disp_rsum());
    return 0;
}
int disp_rsum()
{
    int y=0;
    for(int x=6;x>0;x--)
    {
        y=x+y;
    }
    return (y);
}