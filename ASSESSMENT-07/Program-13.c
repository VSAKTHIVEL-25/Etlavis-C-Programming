
#include <stdio.h>

void disp_reverse_number(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    disp_reverse_number(x);
    return 0;
}
void disp_reverse_number(int x)
{
    int y=0;
    for(;x!=0;)
    {
        y=x%10+y*10;
        x=x/10;

    }
    printf("\nReverse number = %d",y);
}
 