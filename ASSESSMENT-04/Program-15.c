
#include <stdio.h>
int main()
{
    int a=1,b=1,x,y=0,z=0;
    printf("Enter number = ");
    scanf("%d",&x);
    z=x;
    if(x%2==1)
    {
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
        printf("\n Result = %d%d",(z/b)-1,z%b);
    }
    if(z%2==0)
    {
    printf("\nResult = %d",z);
    }
    return 0;
}