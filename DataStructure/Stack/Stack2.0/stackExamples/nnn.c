/* Program to demonstrate the array representation of stack*/
/* int stack*/
#include<stdio.h>
int push(int *stack,int capacity,int *topOfStack,int newValue)
{
    if(*topOfStack==capacity-1)
    return 0;

    (*topOfStack)++;
    stack[*topOfStack]=newValue;
    return 1;

}

int pop(int *stack,int *topOfStack,int *poppedValue)
{
    if(*topOfStack==-1)
    return 0;

    *poppedValue=stack[*topOfStack];
    (*topOfStack)--;
    return 1;
}


void peep(int *stack,int topOfStack)
{
    int i;
    if(topOfStack==-1)
    printf("\n Stack is empty!");

    for(i=0;i<=topOfStack;i++)
    {
        printf("%d",stack[i]);
        if(i<topOfStack)
        printf(">");
    }
}

int main()
{
    //create an integer stack
    int st1[5];
    int st1Capacity=5;
    int st1Tos=-1;

	int poppedValue;
	
    printf("\nST1 status:");
    peep(st1,st1Tos);

	//push 10 to stack st1
	push(st1,st1Capacity,&st1Tos,10);
	
	printf("\nST1 status:");
    peep(st1,st1Tos);
    
    //push 20 into stack st1
    push(st1,st1Capacity,&st1Tos,20);
    	printf("\nST1 status:");
    peep(st1,st1Tos);
    
    //push 30,40 and 50 into stack st1
    push(st1,st1Capacity,&st1Tos,30);
    push(st1,st1Capacity,&st1Tos,40);
    push(st1,st1Capacity,&st1Tos,50);
    	printf("\nST1 status:");
    peep(st1,st1Tos);

	//push 60 into stack st1
	if(push(st1,st1Capacity,&st1Tos,60)==1)
	{
		printf("\n60 pushed successfully to stack.");
	}
	else
	{
		printf("\nStack Overflow");
	}
    	printf("\nST1 status:");
    peep(st1,st1Tos);    
    
    //pop value from stack st1
    if(pop(st1,&st1Tos,&poppedValue)==1)
    {
    	printf("\n %d popped from stack st1",poppedValue);
	}
	else
	{
		printf("\nStack st1 underflow");
	}
		printf("\nST1 status:");
    peep(st1,st1Tos);
	

    return 0;


}
