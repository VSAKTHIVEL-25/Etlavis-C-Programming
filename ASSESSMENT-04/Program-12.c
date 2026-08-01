
#include <stdio.h>
int main()
{
    int x,y=0;
    printf("Enter number = ");
    scanf("%d",&x);
    loop:if(x>0)
        {
            y=(x%10)+y;
            x=x/10;
            goto loop;
        }
    printf("\nThe Sum = %d",y);
    return 0;
}