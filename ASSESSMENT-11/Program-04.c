//Write a function to find the two-digit odd numbers whose sum of digits is 7. Print the results in main function.
#include<stdio.h>
#include<string.h>

int find_2digit_odd_sum7(int *);
int main()
{
    int a[5],n=find_2digit_odd_sum7(a);
    for(int x=0;x<n;x++)
    {
        if(a[x]==61)
        {
            printf("%d",a[x]);
        }
        else
        {
            printf("%d,",a[x]);
        }
    }
    return 0;
}
int find_2digit_odd_sum7(int *a)
{
    int n=0;
    for(int x=25;x<=61;x+=2)
    {
        if(((x/10)+(x%10))==7)
        {
            a[n]=x;
            n++;
        }
    }
    return n;
}