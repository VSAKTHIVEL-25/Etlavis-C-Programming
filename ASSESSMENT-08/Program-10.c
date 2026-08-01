
#include <stdio.h>

int count_total_single_digit_prime();
int main()
{
   printf("Total number of single digit Prime numbers = %d",count_total_single_digit_prime());
    return 0;
}
int count_total_single_digit_prime()
{
    int a=0,y,z=0;
    for(int b=2;b<10;b++)
    {
        for(y=2;y<=b/2;y++)
        {
            if(b%y==0)
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
            a++;
        }
        z=0;
    }
    return (a);
}
 
