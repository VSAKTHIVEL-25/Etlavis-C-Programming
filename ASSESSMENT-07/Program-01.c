
#include <stdio.h>

void disp_ascend();
int main()
{
    disp_ascend();
    return 0;
}
void disp_ascend()
{
    int x;
    for(x=1;x<=5;x++)
    {
        printf("\n%d",x);
    }
}