

/*Infix to postfix conversion*/
#include<stdio.h>
/*Stack*/
/*
int push(char *stack,int cap,int *tos,char symbol)
{
    if(*tos==cap-1)
    return 0;

    stack[++*tos]=symbol;
    return 1;
}
int pop(char *stack,int *tos,char *symbol)
{
    if(*tos==-1)
    return 0;

    *symbol=stack[(*tos)--];
    return 1;
}
char pick(char *stack,int tos)
{
    return stack[tos];
}

//isoperator()
int isoperator(char symbol)
{
    if(symbol=='('||symbol==')'||symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
    return 1;
    else
    return 0;
}

//precedenceOf()
int precedenceof(char optr)
{
    if(optr=='('||optr==')')
    return 4;
    else if(optr=='^')
    return 3;
    else if(optr=='*'||optr=='/')
    return 2;
    else
    return 1;
}

// function to append a charater to string
void append(char*string,char chr)
{
    int i;
    for(i=0;string[i];i++);

    string[i]=chr;
    string[i+1]='\0';
}

int main()
{
    char infix[100],postfix[100]="",stack[50];
    int capacity=50,tos=-1;
    int i;
    char scannedSymbol,pickedOperator,poppedOperator;
    int pushed=0;


    //get an infix expression from user
    printf("enter any valid infix expression:");
    gets(infix);
    //code for infix to postfix conversion
    for(i=0;infix[i];i++)
    {
        scannedSymbol=infix[i];
        
        if(isoperator(scannedSymbol))
        {
            //scannedSymbol is operator
            if(tos==-1)//operator stack is empty
            {
                if(scannedSymbol!=')')
                push(stack,capacity,&tos,scannedSymbol);
            }
            else if(scannedSymbol=='(')
            {
                push(stack,capacity,&tos,scannedSymbol);
            }
            else if(scannedSymbol==')')
            {
                do
                {
                    //pop an operator from stack
                    pop(stack,&tos,&poppedOperator);
                    //if poppedOperator is no '(' the append to postfix expression
                    if(poppedOperator!='(')
                    append(postfix,poppedOperator);
                } while (poppedOperator!='(');
                
            }
            else{       
                pushed=0;
                do
                 {
                //pick top operator from stack
                pickedOperator= pick(stack,tos);
                if(tos==-1)
                {
                    push(stack,capacity,&tos,scannedSymbol);
                    pushed=1;
                }
                else if(pickedOperator=='(')
                {
                    push(stack,capacity,&tos,scannedSymbol);
                    pushed=1;
                }
                else if(precedenceof(pickedOperator)<precedenceof(scannedSymbol))
                {
                    push(stack,capacity,&tos,scannedSymbol);
                    pushed=1;
                }
                else
                {
                    //pop an operator from stack and append it to postfix
                    pop(stack,&tos,&poppedOperator);
                    append(postfix,poppedOperator);

                }
                 }while(pushed==0);
            }

        }
        else
        {
            //scanned symbol is operand
            append(postfix,scannedSymbol);
        }
    }
    //pop all operator from stack and append it to postfix
    while(tos!=-1)
    {
        pop(stack,&tos,&poppedOperator);
        append(postfix,poppedOperator);
    }

    //print postfix expression
    printf("\n Infix:%s\nPostfix:%s",infix,postfix);
    return 0;

}

*/