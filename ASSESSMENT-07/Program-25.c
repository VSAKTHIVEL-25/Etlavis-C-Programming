
#include <stdio.h>

void disp_single_digit_prime(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    disp_single_digit_prime(x);
    return 0;
}
void disp_single_digit_prime(int x)
{
    int a,b=0,y,z=0;
    for(;x!=0;)
    {
        a=x%10;
        for(y=2;y<=a/2;y++)
        {
            if(a%y==0)
            {
                z=1;
            }
        }
        if(z==0 && a!=1)
        {
            b++;
        }
        x=x/10;
        z=0;
    }
    printf("\nTotal number of single digit Prime numbers = %d",b);
}
 