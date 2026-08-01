
#include <stdio.h>

void count_total_digits(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    count_total_digits(x);
    return 0;
}
void count_total_digits(int x)
{
    int y=0;
    for(;x!=0;)
    {
        y++;
        x=x/10;

    }
    printf("\nTotal number of digits = %d",y);
}
  