//Write a loop program to print 5 to 1 on one by one.
#include <stdio.h>
int main()
{
    int x;
    x=1;
    loop:if(x<6)
        {
            printf("%d \n",6-x);
            x++;
            goto loop;
        }
}