//Get a number from and print the same.Change the value without directly changing it and print the same.
#include<stdio.h>
int main()

{
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Number = %d",a);
    int *b=&a;
    *b=*b+2;
    printf("\n%d",*b);
    return 0;
}