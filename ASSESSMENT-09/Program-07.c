
#include<stdio.h>

int main()
{
    int a[5];
    for(int x=0;x<5;x++)
    {
        printf("Enter number %d : ",x+1);
        scanf("%d",&a[x]);
    }
    for(int x=0;x<5;x++)
    {
        for(int y=x+1;y<5;y++)
        {
            int l=0;
            if(a[x]<a[y])
            {
                l=a[x];
                a[x]=a[y];
                a[y]=l;
            }
        }
    }
    printf("Decending Order :\n");
    for(int x=0;x<5;x++)
    {
        printf("%d \n",a[x]);
    }
    return 0;
}