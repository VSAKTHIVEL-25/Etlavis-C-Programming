
#include <stdio.h>

int check_last_digit_odd(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("\nResult = %d",check_last_digit_odd(x));
    return 0;
}
int check_last_digit_odd(int x)
{
    int a=0,y=1,z;
    if(x%2==1)
    {
        for(z=x;z!=0;)
        {
            y=y*10;
            z=z/10;
        }
        y=y/10;
        a=((x/y)-1)*y+x%y;
        return(a);
    }
    else
    {
        return (x);
    }
}
