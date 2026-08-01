
#include <stdio.h>
int main()
{
    int x=1,y=71,z=0;
    loop:if(x<6 && y/10==7)
        {
            x++;
            z=z+y;
            y+=2;
            goto loop;
        }
    printf("%d \n",z);
}