
#include <stdio.h>
int main()
{
    int x,y=0;
    printf("Enter number = ");
    scanf("%d",&x);
    printf("\nThe Sum = ");
    loop:if(x>0)
        {
            y=(x%10);
            x=x/10;
            printf("%d",y);
            goto loop;
        }
    
    return 0;
}