//Get a three-digit number from the user and print the hundred's digit.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("Hunderd's Digit = %d",a/100);
    return 0;
}