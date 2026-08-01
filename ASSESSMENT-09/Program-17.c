
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int a[n],b[n],c=0,d=0;
    for(;c<n;c++)
    {
        printf("Enter number %d :",c+1);
        scanf("%d",&a[c]);
        if(a[c]==0)
        {
            break;
        }
    }
    for(int x=0;x<=c;x++)
    {
        if(a[x]/10>0)
        {
            b[x]=a[x]%10;
            d=a[x]/10;
        }
        else
        {
            b[x]=a[x]+d;
            d=0;
        }
        if(d!=0)
        {
            a[x+1]=a[x+1]+d;
            d=0;
        }
        if(d!=0 && b[x]==0)
        {
            c++;
            b[x]=a[x+1];
        }
        
    }
    printf("Result Array = ");
    for(int x=0;x<c;x++)
    {
        printf("\n%d",b[x]);
    }
    return 0;
}
