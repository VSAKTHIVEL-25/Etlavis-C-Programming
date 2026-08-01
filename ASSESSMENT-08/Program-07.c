#include<stdio.h>
int disp_reverse_number(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("Reverse Number = %d",disp_reverse_number(x));
    return 0;
}
int disp_reverse_number(int x)
{
    int y=0;
    for(;x>0;x=x/10)
    {
        y=x%10+y*10;
    }
    return (y);
}