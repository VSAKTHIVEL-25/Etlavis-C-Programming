
#include <stdio.h>
int main()
{
    int x=9999;
    while(x>1000)
    {
        if(x%7==0 && x%9==0)
        {
            break;
        }
        x--;
    }
    printf("\nBiggest four digit number divided by 7 and 9 = %d",x);
    return 0;
}