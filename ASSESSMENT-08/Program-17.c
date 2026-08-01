
#include <stdio.h>

int disp_count_sum14();
int main()
{
    printf("\nCount of number less than 100000 whose sum of digits is 14 = %d",disp_count_sum14());
    return 0;
}
int disp_count_sum14()
{
    int a=0,b,x,y,z=0;
    for(x=0;x<100000;x++)
    {
        for(b=x;b!=0;)
        {
            y=b%10;
            z=y+z;
            b=b/10;
        }
        if(z==14)
        {
            a++;
        }
        z=0;
    }
    return(a);
}
 