//Get a number from the user and check if the number is greater than 50. If yes, then print "Success"; otherwise, print "Failure"
#include <stdio.h>
int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    if(a>50)
    {
        printf("Success");
    }
    else 
    {
        printf("Failure");
    }
    return 0;
}