
#include<stdio.h>
int main()
{
    int a[5],b[5],c=0,d=0;
    for(int x=0;x<5;x++)
    {
        printf("Enter number %d : ",x+1);
        scanf("%d",&a[x]);
    }
    for(int x=0;x<5;x++)
    {
        for(int y=2;y<=a[x]/2;y++)
        {
            if(a[x]%y==0)
            {
                d=1;
                
                break;
            }
        }
        if(d==1)
        {
            b[c]=a[x];
            c++;
        }
        d=0;
    }
    printf("Result Array :\n");
    for(int x=0;x<c;x++)
    {
        printf("%d \n",b[x]);
    }
    return 0;
}