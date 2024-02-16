/*Resursion
1. Direct Recursion-> Calling function and called function are same
2. Indirect Recursion

Note: In Programming Resursion is implemented using Function.
*/
#include<stdio.h>
void neha(int i)
{
	if(i==0)
	return;
	neha(i-1);
	printf("\n%d",i);
	return;
}

int main()
{
	printf("Hello");
	neha(100);
	return 0;
}

