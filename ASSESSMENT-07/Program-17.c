
#include <stdio.h>

void check_prime_and_sum14(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    check_prime_and_sum14(x);
    return 0;
}
void check_prime_and_sum14(int x)
{

    int y,z=0;
    for(y=2;y<=x/2;y++)
    {
        if(x%y==0)
        {
            z=1;
            printf("\nNot Prime");
            break;
        }
    }
    if(z==0)
    {
        printf("\nPrime");
    }
    z=(x/10)+(x%10);
    if(z==14)
    {
        printf(" & sum of digits is 14");
    }
    else
    {
        printf(" & sum of digits is not 14");
    }
}
 