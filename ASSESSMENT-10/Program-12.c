//
#include<stdio.h>

#include<string.h>
int main()
{
    int a[50],n;
    char b[51];
    printf("Enter number of digits : ");
    scanf("%d",&n);
    printf("Enter number : ");
    for(int x=0;x<n && x<50;x++)
    {
        scanf("%d",&a[x]);
        b[x]=a[x]+48;
    }
    b[n]='\0';
    printf("Result : %s",b);
}