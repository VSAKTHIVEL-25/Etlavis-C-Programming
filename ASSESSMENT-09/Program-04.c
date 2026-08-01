
#include<stdio.h>
int main()
{
    int a[5],l=0;
    printf("Enter number 1 : ");
    scanf("%d",&a[0]);
    l=a[0];
    for(int x=1;x<5;x++)
    {
        printf("Enter number %d : ",x+1);
        scanf("%d",&a[x]);
        if(l<a[x])
        {
            l=a[x];
        }
    }
    printf("Largest Number = %d",l);
    return 0;
}