//Write a loop program to print the two-digit odd numbers, below 20.
#include <stdio.h>
int main()
{
    int x=1,y=11;
    loop:if(x<6)
        {
            printf("%d \n",y);
            x++;
            y+=2;
            goto loop;
        }
}