
#include <stdio.h>
int main()
{
    int a=1,b=1,x,y=0,z=0;
    printf("Enter number = ");
    scanf("%d",&x);
    z=x;
    loop:if(x>0)
        {
            x=x/10;
            y++;
            goto loop;
        }
    loop2:if(a<y)
        {
            b=b*10;
            a++;
            goto loop2;
        }
    printf("\nResult = %d%d%d",z%10,(z%b)/10,z/b);
    return 0;
}