//Get a three-digit number from the user and make the ten's digit as 0, then print it.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("Result number = %d%d%d",a/100,0,a%10);
    return 0;
}