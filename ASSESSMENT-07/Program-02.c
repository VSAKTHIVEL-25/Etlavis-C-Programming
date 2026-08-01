
#include <stdio.h>

void disp_descend();
int main()
{
    disp_descend();
    return 0;
}
void disp_descend()
{
    int x;
    for(x=5;x>0;x--)
    {
        printf("\n%d",x);
    }
}