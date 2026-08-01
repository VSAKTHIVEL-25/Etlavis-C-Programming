//Get a two-digit number from the user and print the one's digit.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number = ");
    scanf("%d",&a);
    printf("One's Digit = %d",a%10);
    return 0;
}