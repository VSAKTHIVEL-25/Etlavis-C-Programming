//Get a String of numbers up to 50 digits and validate the number.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];int b=0;
    printf("Enter numbers : ");
    fgets(a,50,stdin);
    for(int x=0;x<strlen(a)-1;x++)
    {
        if(0<=a[x]-48 && a[x]-48<=9)
        {
            b=0;
            continue;
        }
        else
        {
            b=1;
            break;
        }
    }
    if(b==0)
    {
        printf("\nValid number");
    }
    else
    {
        printf("\nInvalid number");
    }
    return 0;
}