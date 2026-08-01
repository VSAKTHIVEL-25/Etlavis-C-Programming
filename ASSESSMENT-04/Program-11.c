
#include <stdio.h>
int main()
{
    int x,y=0;
    printf("Enter number = ");
    scanf("%d",&x);
    loop:if(x>0)
        {
            x=x/10;
            y++;
            goto loop;
        }
    printf("%d",y);
    return 0;
}