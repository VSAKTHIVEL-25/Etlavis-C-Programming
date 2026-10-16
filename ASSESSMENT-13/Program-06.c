//Write a function to copy a string to another.
#include<stdio.h>
#include<string.h>

void strcopy(const char *, char *);
int main()
{
    char scr[50];
    printf("Enter Source String : ");
    scanf("%s",scr);
    char dst[strlen(scr) + 1];
    strcopy(scr, dst);
    printf("Destination String : %s",dst);
}

void strcopy(const char *src, char *dst)
{
    strcpy(dst, src);
}