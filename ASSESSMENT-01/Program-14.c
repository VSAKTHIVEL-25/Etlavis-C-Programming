//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a four digit number = ");
    scanf("%d",&a);
    printf("Result number = %d%d%d%d",a/1000,(a/100)%10,a%10,(a/10)%10);
    return 0;
}