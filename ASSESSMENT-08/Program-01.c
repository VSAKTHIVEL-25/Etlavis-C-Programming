
#include<stdio.h>
int disp_sum();
int main()
{

    printf("Sum of 1 to 5 = %d",disp_sum());
    return 0;
}
int disp_sum()
{
    int y=0;
    for(int x=1;x<=5;x++)
    {
        y=x+y;
    }
    return (y);
}

