
#include <stdio.h>
int main()
{
    int x=0,a=0;
    loop:if(x<6)
        {
            a=a+(6-x);
            x++;
            goto loop;
        }
    
    printf("%d",a);
    return 0;
}