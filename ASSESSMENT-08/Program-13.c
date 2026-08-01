
#include <stdio.h>

int disp_single_digit_square(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("\nTotal number of single digit perfect square numbers = %d",disp_single_digit_square(x));
    return 0;
}
int disp_single_digit_square(int x)
{
    int y,z=0;
    for(;x!=0;)
    {
        y=x%10;
        if(y==1 || y==4 || y==9)
        {
            z++;
        }
        x=x/10;
    }
    return z;
}
 