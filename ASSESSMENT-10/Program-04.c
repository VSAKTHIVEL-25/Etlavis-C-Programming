//Get a number as a String and print the integer value of the string.
#include<stdio.h>
int main()
{
    char x[50];
    printf("Enter Number : ");
    scanf("%s",&x);
    printf("Integer value = ");
    for(int i=0;x[i]!='\0';i++)
    {
        printf("%d",x[i]-48);
    }
    return 0;
}