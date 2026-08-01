
#include <stdio.h>
int main()
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
    printf("\nCount of number less than 100000 whose sum of digits is 14 = %d",a);
    return 0;
}