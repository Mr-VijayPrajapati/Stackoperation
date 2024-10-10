
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
void push();
int pop();
void traverse();
int stack[MAXSIZE];
int top = -1;
void main() {
    int choice;
    char ch;
    do {
        system("cls");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Traverse");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push();
                break;
            case 2: printf("\nThe deleted element is %d", pop());
                break;
            case 3: traverse();
                break;
            default: printf("\nYou Entered Wrong Choice");
        }
        printf("\nDo You wish to Continue (Y/N): ");
        getchar(); 
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
}
void push() {
    int item;
    if (top == MAXSIZE - 1) {
        printf("\nThe Stack is Full");
        getchar();
        exit(0);
    } else {
        printf("Enter the element to be Inserted: ");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}
int pop() {
    int item;
    if (top == -1) {
        printf("The stack is Empty");
        getchar();
        exit(0);
    } else {
        item = stack[top];
        top = top - 1;
        return item;
    }
}
void traverse() {
    int i;
    if (top == -1) {
        printf("The stack is Empty");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
