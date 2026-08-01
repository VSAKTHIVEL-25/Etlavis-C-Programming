
#include <stdio.h>
int main()
{
    int a=0,b,x=0,y,z=0;
    while(x<100000)
    {
        b=x;
        while(b!=0)
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
        x++;
    }
    printf("\nCount of number less than 100000 whose sum of digits is 14 = %d",a);
    return 0;
}