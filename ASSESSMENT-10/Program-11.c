//
#include<stdio.h>
#include<string.h>
int main()
{
    char a[51];
    int b[50];
    printf("Enter number : ");
    scanf("%s",a);
    for(int x=0;x<=strlen(a)-1;x++)
    {
        b[x]=a[x]-48;
    }
    printf("Result : ");
    for(int x=0;x<strlen(a);x++)
    {
        printf("%d",b[x]);
    }
    return 0;
}