#include <stdio.h>
#define List 10

int stack1[List], stack2[List];
int topOfStack1 , topOfStack2 ;

int push1(int x) {
    if (topOfStack1 == List - 1) {
        printf("Stack1 Overflow\n");
    }
    else {
        topOfStack1++;
        stack1[topOfStack1] = x;
    }
}

int push2(int x) {
    if (topOfStack2 == List - 1) {
        printf("Stack2 Overflow\n");
    }
    else {
        topOfStack2++;
        stack2[topOfStack2] = x;
    }
}

int pop1() {
    if (topOfStack1 == -1) {
        printf("Stack1 Underflow\n");
        return -1;
    }
    else {
        int item = stack1[topOfStack1];
        topOfStack1--;
        return item;
    }
}

int pop2() {
    if (topOfStack2 == -1) {
        printf("Stack2 Underflow\n");
        return -1;
    }
    else {
        int item = stack2[topOfStack2];
        topOfStack2--;
        return item;
    }
}

void display1() {
    if (topOfStack1 == -1) {
        printf("Stack1 is empty\n");
    }
    else {
        printf("Stack1: ");
        for (int i = topOfStack1; i >= 0; i--) {
            printf("%d >", stack1[i]);
        }
        printf("\n");
    }
}

void display2() {
    if (topOfStack2 == -1) {
        printf("Stack2 is empty\n");
    }
    else {
        printf("Stack2: ");
        for (int i = topOfStack2; i >= 0; i--) {
            printf("%d >", stack2[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, x;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push to Stack1\n");
        printf("2. Push to Stack2\n");
        printf("3. Pop from Stack1\n");
        printf("4. Pop from Stack2\n");
        printf("5. Display Stack1\n");
        printf("6. Display Stack2\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push to Stack1: ");
                scanf("%d", &x);
                push1(x);
                break;
            case 2:
                printf("Enter value to push to Stack2: ");
                scanf("%d", &x);
                push2(x);
                break;
            case 3:
                x = pop1();
                    printf("Popped value from Stack1: %d\n", x);
                
                break;
            case 4:
                x = pop2();
                    printf("Popped value from Stack2: %d\n", x);
                
                break;
            case 5:
                display1();
                break;
            case 6:
                display2();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
