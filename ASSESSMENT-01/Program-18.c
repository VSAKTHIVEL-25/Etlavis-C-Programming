//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use "if".
#include <stdio.h>
int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Result = %d",a-(5*(a%2)));
    return 0;
}