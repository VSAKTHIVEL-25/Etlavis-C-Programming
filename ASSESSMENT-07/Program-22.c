
#include <stdio.h>

void disp_total_2digit_odd(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    disp_total_2digit_odd(x);
    return 0;
}
void disp_total_2digit_odd(int x)
{
    int a,y,z=0;
    a=x;
    for(;a!=0;)
    {
        y=a%100;
        if(y>=10)
        {
            if(y%2==1)
            {
                z++;
            }
        }
        a=a/100;
    }
    a=x/10;
    for(;a!=0;)
    {
        y=a%100;
        if(y>=10)
        {
            if(y%2==1)
            {
                z++;
            }
        }
        a=a/100;
    }
    printf("\nTotal number of two digit Odd numbers = %d",z);
}
 