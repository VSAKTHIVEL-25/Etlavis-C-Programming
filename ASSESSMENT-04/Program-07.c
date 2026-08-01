
#include <stdio.h>
int main()
{
    int x=0,y=25;
    loop:if(x<6 && y/10+y%10==7)
        {
            printf("%d \n",y);
            x++;
            y+=18;
            goto loop;
        }
}