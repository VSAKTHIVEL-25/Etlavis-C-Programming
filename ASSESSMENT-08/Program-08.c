#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("Result = %d",disp_interchange_first_last_digit(x));
    return 0;
}
int disp_interchange_first_last_digit(int x)
{
    int a=0,y=1,z=x;
    for(;z>0;z=z/10)
    {
        y=y*10;
    }
    y=y/10;

    a=(x%10)*y+((x%y)/10)*10+x/y;
    return (a);
}