
#include <stdio.h>

void middle_2digits_prime(int);
int main()
{
    int x,y,z=0;
    printf("Enter a four digit Number : ");
    scanf("%d",&x);
    middle_2digits_prime(x);
    return 0;
}
void middle_2digits_prime(int x)
{
    int y,z=0;
    x=(((x/100)%10)*10)+(x/10)%10;
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
}
 