//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print "Success"; otherwise, print "Failure"
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a four digit number = ");
    scanf("%d",&a);
    if((a/10)%10==a%10)
    {
        printf("Success");
    }
    else 
    {
        printf("Failure");
    }
    return 0;
}