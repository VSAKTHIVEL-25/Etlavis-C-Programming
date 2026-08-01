
#include <stdio.h>

void disp_LCM3(int,int,int);
int main()
{
    int x,y,z;
    printf("Enter number 1 : ");
    scanf("%d",&x);
    printf("\nEnter number 2 : ");
    scanf("%d",&y);
    printf("\nEnter number 3 : ");
    scanf("%d",&z);
    disp_LCM3(x,y,z);
    return 0;
}
void disp_LCM3(int x,int y, int z)
{
    int a=0,b=0,c,d;
    if(x>y && x>z)
    {
        a=x;
        b=y;
    }
    else if(y>x && y>z)
    {
        b=x;
        a=y;
    }
    else
    {
        a=x>y?x:y;
        b=x>y?y:x;
    }
    for(;c>0;)
    {
        c=a%b;
        a=b;
        b=c;
    }
    a=(x*y)/a;
    d=a;
    a=d>z?d:z;
    b=d>z?z:d;
    c=5;
    for(;c>0;)
    {
        c=a%b;
        a=b;
        b=c;
    }
    
    printf("\nLCM of three numbers = %d",(d*z)/a);
}
 