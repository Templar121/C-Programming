#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 4
int top = -1;
int array[SIZE];
void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value to be Pushed into stack\n");
        scanf("%d", &x);
        top = top + 1;
        array[top] = x;
    }
    
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped Element %d", array[top]);
        array[top] = 0;
        top = top - 1;
    }
    
}
void show()
{
    int i;
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Elements Present in Stack\n");
        for (i = top; i >= 0; --i)
        {
            printf("%d\n", array[i]);
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("Perform Menu Driven Operations on Stack\n");
        printf("PRESS 1 to Push an element\n");
        printf("PRESS 2 to Pop an element\n");
        printf("PRESS 3 to Show an element\n");
        printf("PRESS 4 to Exit\n");
        printf("Enter your Choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}
