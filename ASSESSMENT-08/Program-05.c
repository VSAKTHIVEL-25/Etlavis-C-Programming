#include<stdio.h>
int count_total_digits(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("Number of digits = %d",count_total_digits(x));
    return 0;
}
int count_total_digits(int x)
{
    int y=0;
    for(;x>0;x=x/10)
    {
        y++;
    }
    return(y);
}
