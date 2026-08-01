
#include <stdio.h>

void disp_total_odd_digits(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    disp_total_odd_digits(x);
    return 0;
}
void disp_total_odd_digits(int x)
{
    int y,z=0;
    
    for(;x>0;)
    {
        y=x%10;
        if(y%2==1)
        {
            z++;
        }
        x=x/10;
    }
    
    printf("\nTotal number of single digit Odd numbers = %d",z);
}