
#include <stdio.h>
int main()
{
    int x;
    for(x=9999;x>1000;x--)
    {
        if(x%7==0 && x%9==0)
        {
            break;
        }
    }
    printf("\nBiggest four digit number divided by 7 and 9 = %d",x);
    return 0;
}