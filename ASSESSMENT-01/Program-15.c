//Get a two-digit number from the user, make the one's digit 0, then print it.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number = ");
    scanf("%d",&a);
    printf("Result number = %d%d",a/10,0);
    return 0;
}