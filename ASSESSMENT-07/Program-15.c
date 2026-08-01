
#include <stdio.h>

void check_last_digit_odd(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    check_last_digit_odd(x);
    return 0;
}
void check_last_digit_odd(int x)
{
    int y=1,z;
    if(x%2==1)
    {
        for(z=x;z!=0;)
        {
            y=y*10;
            z=z/10;
        }
        y=y/10;
        printf("Result = %d%d",(x/y)-1,x%y);
    }
    else
    {
        printf("\nResult = %d",x);
    }
}
