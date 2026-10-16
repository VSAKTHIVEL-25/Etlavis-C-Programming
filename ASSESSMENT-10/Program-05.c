//Get an integer and print it as a string.
#include<stdio.h>
int main()
{
    int a,n=0,b=1;
    printf("Enter Number : ");
    scanf("%d",&a);
    for(int x=a;x>0;x=x/10)
    {
        n++;
        b=b*10;
    }
    b=b/10;
    char c[n];
    for(int x=0;x<n;x++)
    {
        c[x]=(a/b)+48;
        a=a%b;
        b=b/10;
    }
    c[n]='\0';
    printf("String = %s",c);
    return 0;
}
