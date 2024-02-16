#include<iostream>
#include<cmath>
using namespace std;

class MyIntStack
{
    private:
        int *stack;//pointer stack store base address
        int capacity;
        int tos;
    public:
        // default constructor
        MyIntStack()
        {
            capacity=12;
            stack=new int[capacity];
            tos=-1;
        }
        // parameterised constructor
        MyIntStack(int cap)
        {
            cap=abs(cap);

            if(cap==0)
            cap=12;

            capacity=cap;
            stack=new int[capacity];
            tos=-1;
        }

int push(int *stack, int capacity, int *topOfStack, int value)
{
    if (*topOfStack == capacity-1)
    return 0;

    (*topOfStack)++;
    stack[*topOfStack] = value;
    return 1;
}

int pop(int *stack, int *topOfStack, int *poppedValue)
{
    if (*topOfStack ==-1)
    return 0;

    *poppedValue = stack[*topOfStack];
    (*topOfStack)--;
    return 1;   
}

void peep(int *stack, int topOfStack)
{
    int i;
    if (topOfStack ==-1)
    printf("\nStack is empty!");

    for(i=0; i<=topOfStack; i++)
    {
        printf("%d", stack[i]);
        if(i<topOfStack)
        printf(",");
    }
}

void empty()
    {
        int tos=-1;
    }

int main()
{
	MyIntStack st1, st2(5),st3(12);
	 
	//stack 2
	st1.push(23);
   	st1.push(12);
   	st1.push(33);

	//stack 2
    st2.push(878);
    st2.push(67);

    //stack 3
    st3.push(78);
    st3.push(66);
    st3.push(99);

    // show stack1
    st1.peep("st1");
    st2.peep("st2");
    st3.peep("st3");

}
