
#include <stdio.h>

void disp_interchange_first_last_digit(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
    return 0;
}
void disp_interchange_first_last_digit(int x)
{
    int y=1,z;
    for(z=x;z!=0;)
    {
        y=y*10;
        z=z/10;
    }
    y=y/10;
    printf("\nResult = %d%d%d",x%10,(x%y)/10,x/y);
}
 