//Get a number from the user and check if the number equals 50. If yes, the print 1, otherwise print 0
#include <stdio.h>
int main()
{
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Result = %d",a==50);
    return 0;
}