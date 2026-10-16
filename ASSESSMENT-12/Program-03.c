//Write a loop program to print 1 to 5 one by one. Write a function and print the result in a main function.
#include<stdio.h>
int arrange_ascent(int);

int main()
{
    for(int x=1;x<=5;x++)
    {
        printf("%d\n",arrange_ascent(x));

    }
    return 0;
}
int arrange_ascent(int x)
{
    return x;
}