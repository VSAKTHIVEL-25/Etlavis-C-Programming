//Add two integer arrays of up to 50 digits and store the result in a 51-digit array.
#include<stdio.h>
int main()
{
    int n,z=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    z=n+1;
    int a[50],b[50],c=0,d=0;a[50]=0;
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