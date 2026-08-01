//Get a three-digit number from the user and print the reverse of the number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("Reverse number = %d%d%d",a%10,(a/10)%10,a/100);
    return 0;
}