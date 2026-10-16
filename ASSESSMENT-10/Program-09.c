//
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];int b=0;
    printf("Enter number : ");
    fgets(a,50,stdin);
    printf("Result : ");
    for(int x=0;x<strlen(a)-1;x++)
    {
        if(a[x]=='0' && b==0)
        {
            continue;
        }
        else
        {
            printf("%d",a[x]-48);
            b=1;
        } 
    }
    return 0;
}