//Get a three-digit number from the user and subtract five from that number if one's digit number and 100's digit number are odd, then print the result. Do not use "if".
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("Result = %d",a-(5*((((a/100)%10)%2)&&((a%10))%2)));
    return 0;
}