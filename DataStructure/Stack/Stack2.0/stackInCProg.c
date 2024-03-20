#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 12

// Structure to represent a stack
typedef struct {
    int capacity;
    int top;
    int* data;
} Stack;

// Function to create a new stack with given capacity
Stack* createStack(int capacity) {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->data = (int*) malloc(capacity * sizeof(int));
    return stack;
}

// Function to push an element onto the stack
void push(Stack* stack, int value) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack->top++;
    stack->data[stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow!\n");
        return -1;
    }
    int value = stack->data[stack->top];
    stack->top--;
    return value;
}

// Function to display the contents of the stack
void display(Stack* stack) {
    printf("Stack (capacity: %d, size: %d): ", stack->capacity, stack->top + 1);
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

int main() {
    // Create three stacks
    Stack* stack1 = createStack(5);
    Stack* stack2 = createStack(10);
    Stack* stack3 = createStack(12);

    // Push values onto the stacks
    push(stack1, 1);
    push(stack1, 2);
    push(stack1, 3);
    push(stack2, 4);
    push(stack2, 5);
    push(stack3, 6);
    push(stack3, 7);
    push(stack3, 8);

    // Display the contents of the stacks
    printf("Before popping:\n");
    display(stack1);
    display(stack2);
    display(stack3);

    // Pop one value from each stack
    pop(stack1);
    pop(stack2);
    pop(stack3);

    // Display the contents of the stacks
    printf("After popping:\n");
    display(stack1);
    display(stack2);
    display(stack3);

    // Push more values onto the stacks
    push(stack1, 9);
    push(stack1, 10);
    push(stack2, 11);
    push(stack2, 12);
    push(stack3, 13);
    push(stack3, 14);

    // Display the contents of the stacks
    printf("After pushing more values:\n");
    display(stack1);
    display(stack2);
    display(stack3);

    // Empty all the stacks
    while (stack1->top != -1) {
        pop(stack1);
    }
    while (stack2->top != -1) {
        pop(stack2);
    }
    while (stack3->top != -1) {
        pop(stack3);
    }

    // Display the contents of the stacks
    printf("After emptying the stacks:\n");
    display(stack1);
    display(stack2);
    display(stack3);

    return 0;
}
