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
    for(int x=0;x<b;x++)
    {
        c=a[x]+c;
    }
    printf("Total numbers = %d ",b);
    printf("Sum of the numbers = %d ",c);
    return 0;
}