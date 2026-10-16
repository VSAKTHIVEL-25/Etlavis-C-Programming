//Pass an integer array to a function and increment each array element inside the function.
#include<stdio.h>
void increment(int *,int);
int main()
{
    int n;
    printf("Enter Number of Digits : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Numbers : \n");
    for(int x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    increment(a,n);
    for(int x=0;x<n;x++)
    {
        printf("%d ",a[x]);
    }
    return 0;
}
void increment(int *a,int n)
{
    for(int x=0;x<n;x++)
    {
        a[x]=a[x]+1;
    }
}