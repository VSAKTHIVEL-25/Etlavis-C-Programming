
#include <stdio.h>
int main()
{
    int x,y=2,z=0;
    printf("Enter number = ");
    scanf("%d",&x);
    loop:if(y<=x/2)
        {
            if(x%y==0)
            {
                z=1;
                goto loop2;
            }
            y++;
            goto loop;
        }
    printf("\nResult = PRIME");
    loop2:if(z==1)
    {
        printf("\nResult = NOT PRIME");
    }
    return 0;
}