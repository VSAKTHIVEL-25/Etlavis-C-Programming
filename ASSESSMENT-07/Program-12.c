
#include <stdio.h>

void disp_sum_all_digits(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    disp_sum_all_digits(x);
    return 0;
}
void disp_sum_all_digits(int x)
{
    int  y=0;
    for(;x!=0;)
    {
        y=x%10+y;
        x=x/10;

    }
    printf("\nSum of all digits = %d",y);
}
 