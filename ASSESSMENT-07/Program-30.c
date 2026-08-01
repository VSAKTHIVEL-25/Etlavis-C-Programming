
#include <stdio.h>

void disp_count_HCF2(int,int);
int main()
{
    int x,y;
    printf("Enter number 1 : ");
    scanf("%d",&x);
    printf("\nEnter number 2 : ");
    scanf("%d",&y);
    disp_count_HCF2(x,y);
    return 0;
}
void disp_count_HCF2(int x,int y)
{
    int a,b,c,z=0;
    if(x>y)
    {
        a=x;
        b=y;
    }
    else
    {
        b=x;
        a=y;
    }
    for(;c>0;)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("\nHCF of two numbers = %d",a);
}
 