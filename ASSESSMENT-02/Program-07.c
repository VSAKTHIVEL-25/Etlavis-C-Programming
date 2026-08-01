// /Get a two-digit number from the user and check if the digit 0 and digit 1 are identical. If yes, print 1; otherwise, print 0
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number = ");
    scanf("%d",&a);
    printf("Result = %d",a/10==a%10);
    return 0;
}