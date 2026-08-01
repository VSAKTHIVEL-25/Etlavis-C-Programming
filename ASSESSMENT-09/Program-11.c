#include<stdio.h>
int main()
{
    int a[5],b[5],c=0;
    for(int x=0;x<5;x++)
    {
        printf("Enter number %d :",x+1);
        scanf("%d",&a[x]);
    }
    for(int x=0;x<5;x++)
    {
        b[x]=0;
        for(;a[x]>0;a[x]=a[x]/10)
        {
            b[x]=a[x]%10 + b[x]*10;
        }
        c=c+b[x];
    }
    printf("Sum of new array = %d ",c);
    return 0;
}