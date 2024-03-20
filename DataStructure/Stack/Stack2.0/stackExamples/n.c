//Write a C program for followinf menu
#include<stdio.h>
#include<process.h>
#define List 5

int *stack1[List], *topOfStack1,*poppedValue;
int push(int newValue)
{
	int data;
    if(*topOfStack1==List-1)
    return 0;

	printf("Enter any number to push your number in Stack:");
	scanf("%d",&data);
    (*topOfStack1)++;
    stack1[*topOfStack1]=newValue;
    return 1;

}

int pop()
{
    if(*topOfStack1==-1)
    return 0;
	
	//printf("%d is popped in Stack:"stack[*topOfStack]);
    *poppedValue=stack1[*topOfStack1];
    (*topOfStack1)--;
    return 1;
}

//peep as view
void view()
{
    int i;
    if(topOfStack1==-1)
    printf("\n Stack is empty!");

    for(i=0;i<=topOfStack1;i++)
    {
        printf("%d",stack1[i]);
        if(i<topOfStack1)
        printf(">");
    }
}


int main()
{
	int stack[5], topOfStack=-1;
	int  newValue;
	int choice, i;
	do
	{
		//Menu
 		printf("\n1. Push to stack 1\n2. Push to stack 2");
		printf("\n3. Pop from stack 1\n4. Pop from stack 2");
		printf("\n5. Display stack 1\n6. Display stack 2");
		printf("\n7. Exit.");
		printf("\nPlease enter your desired choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1://int push(int *stack, int capacity ,int *topOfStack, int newValue); 
			if(topOfStack==5-1)
			{
				printf("stack is fail");
				break;
			}
			printf("enter no:");
			scanf("%d",&newValue);
			topOfStack=topOfStack+1;
			stack[topOfStack]=newValue;
			printf("%d is added successfully  in Stack.",newValue);
				   break;
				   
			case 2:
                //push(newValue); 
				break;
			
			case 3://int pop();
			if(topOfStack==-1)
			{
				printf("Stack is Underflow");
				break;
			}
				printf("%d is POPPED successfully.",stack[topOfStack]);
				topOfStack=topOfStack-1;
			       break;
			
			case 4:// pop();
			break;
			
			case 5://void view(int *stack, int topOfStack);
			if(topOfStack>=0)
			{
				printf("Stack elements:\n");
				for(i=topOfStack; i>=0; i--)
				{
					printf("%d\n", stack[i]);
				}
				break;
			}
			printf("Stack is empty!!");
			       break;
			
			case 6: //view();
			       break;
			
			case 7://code for exit
				return 0;
			default:
			printf("\nSorry! you have entered an invalid choice.");
		}
		printf("\n");
		system("pause");
	}while(1);
	
}