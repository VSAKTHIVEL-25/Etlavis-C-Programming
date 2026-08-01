//Get a three-digit number from user.If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should always be a single digit only.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    b=(a/100)%10+(a/10)%10+a%10;
    if(b>10)
    {
        b=(b/10)%10+b%10;
        if(b>10)
        {
            b=(b/10)%10+b&10;
        }

    }
    printf("Result = %d",b);
    return 0;
}