//Write a program to find the length of the string using for loop and strlen function.
#include<stdio.h>
#include<string.h>
int main()
{
    char x[50];
    int y=0;
    printf("Enter String : ");
    scanf("%s",&x);
    for(int a=0;a<50;a++)
    {
        
        if(x[a]==0)
        {
            break;
        }
        y++;
    }
    printf("Length of the string using for loop = %d",y);
    printf("\nLength of the string using strlen function = %d",strlen(x));
    return 0;
}