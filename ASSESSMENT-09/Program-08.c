
#include<stdio.h>

int main()
{
    int a[5],b[5],c=0,y=0;
    for(int x=0;x<5;x++)
    {
        printf("Enter number %d : ",x+1);
        scanf("%d",&a[x]);
    }
    for(int x=0;x<5;x++)
    {
        if(a[x]%2==0)
        {
            b[y]=a[x];
            y++;
        }    
    }
    printf("Result Array :\n");
    for(int x=0;x<y;x++)
    {
        printf("%d \n",b[x]);
    }
    return 0;
}