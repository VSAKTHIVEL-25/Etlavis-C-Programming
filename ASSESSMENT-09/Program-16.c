//Add two integer arrays of up to 50 digits and store the result in a 51-digit array.
#include <stdio.h>
int main()
{
    int a[50],b[50];
    printf("Enter First Array : \n");
    for(int x=0;x<50;x++)
    {
        scanf("%d ",&a[x]);
    }
    printf("Enter Second Array : \n");
    for(int x=0;x<5;x++)
    {
        scanf("%d ",&b[x]);
    }
}