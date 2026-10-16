
#include <stdio.h>
#include <stdint.h>
#include <limits.h>
int i();
int main()
{
    /*uint16_t a=0,b=0,c=0,d=0,n=1;
    printf("Enter numbers: ");
    scanf("%d",&a);
    printf("\nEnter numbers: ");
    scanf("%d",&b);
    //sscanf(x,"%hu",&a);
    //sscanf(y,"%hu",&b);
    for(int x=0;x<16;x++)
    {
        c=((a%10)*n)+c;
        a=a/10;
        d=((b%10)*n)+d;
        b=b/10;
        n=n*2;
    }
    printf("%d %d",c,d);*/
    int g=5;
    i();
    printf("%d",g);
    return 0;
}
int i()
{
    extern int g;
    printf("%d",g);
    return 0;

}
/*#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
bool isPalindrome(int64_t);
int main()
{
    int a[50]={1,2,3,4,5,6,7,8,9,10};
    char b[50]={'a','b','c','d','e','f','g','h','i','j'};
    /*uint8_t aa;
    scanf("%d",&aa);
    printf("\n%d",aa);
    //printf("%6.5s",a);
    printf("%.0f\n",pow(2,31));
    printf("%d",INT_MAX);
    return 0;
}
bool isPalindrome(int64_t x) 
{
    int64_t a=0,c=x;
    if(x<INT_MAX && x>INT_MIN)
    {
    if(x<0)
    {
        return false;
    }
    while(x>0)
    {
        a=(a*10)+(x%10);
        x=x/10;
    }
    if(c==a)
    {
        return true;
    }
    return false;
    }
    return false;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

// -------- Stack for Shopping Cart --------
struct Item
{
    char name[50];
}

struct Item cart[MAX];
int top = -1;

// -------- Queue for Purchase History --------
struct Item history[MAX];
int front = -1, rear = -1;

// Add item to cart
void addToCart()
{
    if (top == MAX - 1)
    {
        printf("Shopping Cart is Full!\n");
        return;
    }

    top++;
    printf("Enter Item Name: ");
    scanf(" %[^\n]", cart[top].name);

    printf("Item Added to Cart Successfully.\n");
}

// Remove last added item
void removeFromCart()
{
    if (top == -1)
    {
        printf("Shopping Cart is Empty!\n");
        return;
    }

    printf("Removed Item: %s\n", cart[top].name);
    top--;
}

// Display cart
void displayCart()
{
    if (top == -1)
    {
        printf("Shopping Cart is Empty!\n");
        return;
    }

    printf("\nShopping Cart:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%s\n", cart[i].name);
    }
}

// Checkout
void checkout()
{
    if (top == -1)
    {
        printf("Shopping Cart is Empty!\n");
        return;
    }

    printf("\nPurchase Completed.\n");

    while (top != -1)
    {
        if (front == -1)
            front = 0;

        rear++;

        strcpy(history[rear].name, cart[top].name);

        top--;
    }
}

// Display Purchase History
void displayHistory()
{
    if (front == -1)
    {
        printf("No Purchase History Available.\n");
        return;
    }

    printf("\nPurchase History:\n");

    for (int i = front; i <= rear; i++)
    {
        printf("%s\n", history[i].name);
    }
}

// Main Function
int main()
{
    int choice;

    while (1)
    {
        printf("\n===== SHOPPING CART =====\n");
        printf("1. Add Item\n");
        printf("2. Remove Item\n");
        printf("3. Display Cart\n");
        printf("4. Checkout\n");
        printf("5. Purchase History\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addToCart();
            break;

        case 2:
            removeFromCart();
            break;

        case 3:
            displayCart();
            break;

        case 4:
            checkout();
            break;

        case 5:
            displayHistory();
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}*/