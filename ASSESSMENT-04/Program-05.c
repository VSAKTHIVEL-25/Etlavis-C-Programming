//Write a loop program to print odd number between 1 and 9.
#include <stdio.h>
int main()
{
    int x=1,y=1;
    loop:if(x<6)
        {
            printf("%d \n",y);
            x++;
            y+=2;
            goto loop;
        }
}