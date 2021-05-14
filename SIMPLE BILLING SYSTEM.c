#include<stdio.h>
#include<conio.h>
#define size 10 //size of basket
int st[size];   // array to store items
int top=-1;


void push() // function to add item in basket
{
    int x,y,z;
    if(top==size-1) // condition to check if basket is full
    {
        printf("\n SORRY YOUR BUCKET IS FULL");
    }
    else
    {
        printf("\n WHAT DO YOU WANT TO BUY");
        printf("\n ENTER YOUR ITEM NUMBER :");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\nPRICE OF ONE SHIRT IS RS.200");
                printf("\nHOW MANY SHIRTS DO YOU WANT TO BUY :");
                scanf("%d",&y);
                z=200*y;
                break;
            case 2:
                printf("\nPRICE OF ONE TOOTHPASTE IS RS.75");
                printf("\nHOW MANY TOOTHPASTE DO YOU WANT TO BUY :");
                scanf("%d",&y);
                z=75*y;
                break;
            case 3:
                printf("\nPRICE OF ONE ICECREAM IS RS.15");
                printf("\nHOW MANY ICECREAMS CUPS DO YOU WANT TO BUY:");
                scanf("%d",&y);
                z=15*y;
                break;
            case 4:
                printf("\nPRICE OF ONE BAG IS RS.500");
                printf("\nHOW MANY BAGS DO YOU WANT TO BUY :");
                scanf("%d",&y);
                z=500*y;
                break;
            case 5:
                printf("\nPRICE OF ONE KG RICE IS RS.50");
                printf("\nHOW MANY KG RICE DO YOU WANT TO BUY :");
                scanf("%d",&y);
                z=50*y;
                break;
            default:
                printf("\n NO SUCH ITEM IN THE STORE");
                break;
        }
        top++; //increment the top of basket
        st[top]=z; //store the item in basket
        printf("\n FINAL VALUE OF PRODUCT IS %d",z);
    }
}

void pop() // function to remove an item from basket
{
    int x;
    if(top==-1) // check whether basket is empty
    {
        printf("\n SORRY BUCKET IS EMPTY ");
    }
    else
    {
        x=st[top]; // remove the item in top of basket
        top--; // decrement the top
        printf("\nVALUE OF REMOVED ITEM IS: %d",x);
    }
}


void peek() // function to see the fresh item added to basket
{
    int x;
    if (top==-1)
    {
        printf("\n SORRY YOUR BUCKET IS EMPTY");
    }
    else
    {
        x=st[top];
        printf("\n ITEM ON THE TOP OF BUCKET HAVE VALUE =%d",x);
    }
}


void display() //function to display the final bill of purchased items
{
    int sum=0;
    if(top==-1)
    {
        printf("\n SORRY BUCKET IS EMPTY ");
    }
    else
    {
        int i=top;
        printf("\nFINAL BILL IS :\n");
        while(i!=-1) // loop which shows the final value of each item buyed
        {
            printf("%d\n",st[i--]);
        }
        
        i=top;
        while(i!=-1) //loop to calculate the total bill 
        {
            sum=sum+st[i];
            i--;
        }
        printf("\nFINAL SUM OF BILL IS %d",sum);
        printf("\nTHANKYOU FOR SHOPPING WITH US\nPLEASE COME BACK");
    }
}


void main() //main function
{
    int n;
    printf("ENTER 1 TO ADD AN ITEM TO BASKET");
    printf("\nENTER 2 TO REMOVE AN ITEM FROM BASKET");
    printf("\nENTER 3 TO CHECK LAST ITEM ADDED TO BASKET");
    printf("\nENTER 4 TO DISPLAY THE FINAL BILL");
    
    do
    {
        printf("\n ENTER YOUR CHOICE :");
        scanf("%d",&n);
        switch(n)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:peek();
                break;
            case 4:display();
                break;
            default:
                printf("NO SUCH OPERATIONS");
                break;
        }
    }
    while(n!=0);
    getch();
}