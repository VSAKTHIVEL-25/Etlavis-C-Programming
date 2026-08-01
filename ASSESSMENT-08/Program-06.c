#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("Sum of all digits = %d",disp_sum_all_digits(x));
    return 0;
}
int disp_sum_all_digits(int x)
{
    int y=0;
    for(;x>0;x=x/10)
    {
        y=x%10+y;
    }
    return (y);
}