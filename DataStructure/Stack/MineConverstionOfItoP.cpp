//infix to postfix conversion
#include<stdio.h>
#include<string.h>
#include<math.h>

//stack
int push(char *stack, int cap, int *tos, char symbol)
{
    if(*tos==cap-1)
    return 0;

    stack[++*tos]=symbol;
    return 1;
}

int pop(char *stack, int *tos, char *symbol)
{
    if(*tos==-1)
    return 0;

    symbol=stack[(*tos)--1];
    return 1;
}

int push_float(float *stack, int cap, int *tos, float data)
{
    if(*tos==cap-1)
    return 0;
    
    stack[++*tos]=data;
    return 1;
}

int pop_float()
{
    
}

char pick()
{

}

//input string operator
int isoperator()
{
    
}

//precedence
int precedence()
{
    
}

//function to append a char to string
void append()
{

}

//function to check an expression is valid or not
int valid_expression()
{

}

int main()
{

}
