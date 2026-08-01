//Get a two-digit number from the user, make the ten's digit 1, and then print it.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number = ");
    scanf("%d",&a);
    printf("Result number = %d%d",1,a%10);
    return 0;
}