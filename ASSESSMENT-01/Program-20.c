//Get a two-digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use "if".
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number = ");
    scanf("%d",&a);
    printf("Result = %d",a-(5*((((a/10)%10)+(a%10))%2)));
    return 0;
}