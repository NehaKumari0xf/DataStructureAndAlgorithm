//C program to find factorial of any +ve integer number
//using non recursive(loop) and resursive method
#include<stdio.h>
#include<process.h>
#include<time.h>

//create function to find factorial
long fact(long n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	long n,i,f;
	int choice;
	time_t t1,t2;
	do
	{
	
	printf("\nFactorial\n1. Using Non Recursive Method\n2. Using Recursive method\n 3. Or any number to exit:");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1://code to find factorial using non recursive method
			printf("Enter any +ve integer number:");
			scanf("%ld",&n);
			n=abs(n);
			f=1;
			time(&t1);
			for(i=n;i>0;i--)f*=i;
			time(&t2);
			printf("Start Time %lu\n end time %lu",t1,t2);
			printf("\nFactorial of %ld is %ld. Total Time in calculation=%d",n,f,t2-t1);
			printf("\nThank You");
		break;
		case 2://code to find factorial using recursive method
			printf("Enter any +ve integer number:");
			scanf("%ld",&n);
			n=abs(n);
			time(&t1);
			f=fact(n);
			time(&t2);
			printf("\nFactorial of %ld is %ld, Total Time in calculation=%d",n,f,t2-t1);
			printf("\nThank You");
		break;
		default:
			exit(0);
	}
}while(1);
}
