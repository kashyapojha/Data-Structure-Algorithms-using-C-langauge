  // Array implementation of stack 

//global variable
//#define Max 100   -> Macro Processor :- Whenever max comes in code is replaced by 100
//int a[Max];
//int top; 

#include <stdio.h>
#define Max 100  

int a[Max];  // Global array for stack
int top;     // Global variable to track top of the stack

// Initialize the stack
void init() {
    top = -1;  // Initialize top to -1
}

// Check if the stack is empty
int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

// Push data onto the stack
void push(int data) {
    if (top == Max - 1) {
        printf("\nStack overflow");
    } else {
        top++;
        a[top] = data;
    }
}

// Pop data from the stack
int pop() {
    if (isEmpty()) {  
        printf("Stack is empty\n");
        return -1;  // Return -1 to indicate an error
    } else {
        int data = a[top];
        top--;
        return data;
    }
}

int main() {
    init();  // Initialize the stack

    // Push  operation  
    for (int i = 0; i < 5; i++) {
        int element;
        printf("Enter the element to push in stack: ");
        scanf("%d",&element);
        push(element);
    }

    // Pop  operation 
    printf("\nDeleting elements from the stack:");
    while (!isEmpty()) {
        printf("%d\n", pop());
    }
    return 0;
};
