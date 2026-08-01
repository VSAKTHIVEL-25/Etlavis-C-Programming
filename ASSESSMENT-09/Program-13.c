
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
    if(b==4 && a[0]==a[3])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}