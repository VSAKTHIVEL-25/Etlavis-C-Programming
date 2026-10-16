//Get an integer and print each digit as a character. Print one character on one line.
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
    printf("String : \n");
    for(int x=0;x<n;x++)
    {
        printf("%c\n", (a/b)+48);
        a=a%b;
        b=b/10;
    }
    return 0;
}
