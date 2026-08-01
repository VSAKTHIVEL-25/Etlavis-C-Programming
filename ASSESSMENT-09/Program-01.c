#include<stdio.h>
int main()
{
    int x[5],y=0;
    for(int z=0;z<5;z++)
    {
        printf("Enter number %d : ",z+1);
        scanf("%d",&x[z]);
        y=x[z]+y;
    }
    printf("\nSum = %d",y);
    return 0;
}