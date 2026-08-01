
#include<stdio.h>
int main()
{
    int a[100],b=0,c=0;
    for(;b<100;b++)
    {
        printf("Enter number %d :",b+1);
        scanf("%d",&a[b]);
        if(a[b]==0)
        {
            break;
        }
    }
    if(b%2==0)
    {
        printf("Average of middle numbers = %d",(a[b/2-1]+a[b/2])/2);
    }
    else
    {
        printf("Middle number = %d",a[b/2]);
    }
    return 0;
}
