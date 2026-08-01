
#include <stdio.h>
int main()
{
    int x=1,a=0;
    loop:if(x<6)
        {
            a=a+x;
            x++;
            goto loop;
        }
    printf("%d",a);
}