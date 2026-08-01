// Get a two-digit number from user and print the reverse of the number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number = ");
    scanf("%d",&a);
    printf("Reverse number = %d%d",a%10,a/10);
    return 0;
}