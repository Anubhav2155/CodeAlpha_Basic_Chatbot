#include<stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int data)
{
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = data;
}
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    top--;
}
void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for(int i=top; i>=0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
inline int peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}
int main()
{
    int choice, data;
    while(1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                data = peek();
                if(data != -1)
                    printf("Top element is: %d\n", data);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}