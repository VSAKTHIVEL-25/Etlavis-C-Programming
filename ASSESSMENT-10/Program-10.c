//
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter number : ");
    fgets(a,50,stdin);
    printf("Result : ");
    for(int x=strlen(a)-2;x>=0;x--)
    {
        printf("%c",a[x]);

    }
    return 0;
}