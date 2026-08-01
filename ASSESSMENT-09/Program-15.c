
#include<stdio.h>
int main()
{
    int a[100],b[100],c=0,d=0;
    for(;c<100;c++)
    {
        printf("Enter number %d :",c+1);
        scanf("%d",&a[c]);
        if(a[c]==0)
        {
            break;
        }
    }
    for(int x=0;x<c;x++)
    {
        for(;a[x]>0;a[x]=a[x]/10)
        {
            d=a[x]%10+d;
        }
        b[x]=d;
        d=0;
    }
    printf("Result Array : \n");
    for(int x=0;x<c;x++)
    {
        for(int y=x+1;y<c;y++)
        {
            if(b[x]>b[y])
            {
                int z=b[x];
                b[x]=b[y];
                b[y]=z;
                z=0;
            }
        }
    }
    for(int x=0;x<c;x++)
    {
        printf("%d \n",b[x]);
    }
    return 0;
}
