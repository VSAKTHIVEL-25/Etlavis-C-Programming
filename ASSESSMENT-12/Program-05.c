//Write a function to copy integers from one location to another location.
#include<stdio.h>
int main()
{
    int n[100],t,a=0;
    for(int x=0;x<10000;x++)
    {
        scanf("%d",&n[x]);
        if(n[x]==0)
        {
            break;
        }
        a++;
    }
    for(int x=0;x<a;x++)
    {
        printf("%d\n",n[x]);
    }
}