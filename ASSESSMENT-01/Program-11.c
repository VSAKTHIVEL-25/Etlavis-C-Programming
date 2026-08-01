//Get a three-digit number from the user and print the sum of the digits.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("Sum of the Digit = %d",a/100+(a/10)%10+a%10);
    return 0;
}