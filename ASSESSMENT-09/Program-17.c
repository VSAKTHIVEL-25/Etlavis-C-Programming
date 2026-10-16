
#include<stdio.h>
int main()
{
    int n,z=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    z=n+1;
    int a[z],b[z],c=0,d=0;a[n]=0;
    for(;c<n;c++)
    {
        printf("Enter number %d :",c+1);
        scanf("%d",&a[c]);
    }
    for(int x=0;x<z;x++)
    {
        if(a[x]/10>0)
        {
            b[x]=a[x]%10;
            d=a[x]/10;
        }
        else
        {
            b[x]=a[x]+d;
            if(x==n && b[n]!=0)
            {
                c++;
            }
            d=0;
        }
        if(d!=0)
        {
            a[x+1]=a[x+1]+d;
            d=0;
        }
        
    }
    printf("Result Array = ");
    for(int x=0;x<c;x++)
    {
        printf("\n%d",b[x]);
    }
    return 0;
}
