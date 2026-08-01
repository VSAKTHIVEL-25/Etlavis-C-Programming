//Get a three-digit number from the user, make the one's digit 2, and then print it.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("Result number = %d%d%d",a/100,(a/10)%10,2);
    return 0;
}