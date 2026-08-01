//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a four digit number = ");
    scanf("%d",&a);
    printf("Result = %d%d%d",(a/100)%10,a/1000,a%100);
    return 0;
}