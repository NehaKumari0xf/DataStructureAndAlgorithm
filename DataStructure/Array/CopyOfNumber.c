#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};// a array contains original value.
    int b[5];//b array is a copy.
    int i;

    for(i=0;i<5;i+=1)//loop for copy
    {
    b[i]=a[i];//all the elements of a array is going to copying in b array with the help of above for loop.
    }

    printf("\n---------------------------------\n");
    printf("||Original value | Copied value||");
    printf("\n---------------------------------");
    for(i=0;i<5;i+=1)
   {
        printf("\n||\t%d\t |\t%d      ||",a[i],b[i]);
   }
    printf("\n---------------------------------\n");
   
    return 0;
    
}

/* Write a C program in which accept any
20 integer number from user and count
total prime number.
#include<stdio.h>
int main()
{
    int a[20],i,j,totalprime=0,isprime=1;
    for(i=0;i<20;i+=1)
    {
        printf("Enter any number %d:=",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<20;i+=1)
    {
    isprime=1;
    for(j=2;j<=a[i]/2&&isprime==1;j+=1)
    {
		
        if(a[i]%j==0)
	
        isprime=0;
    }
	
    if(isprime==1)
    totalprime+=1;
    }
    for(i=1;i<8;i+=1)
    printf("🔸✏🔸");
    printf("\n");
    printf("total prime number=%d\n",totalprime);
    for(i=1;i<8;i+=1)
    printf("🔸✏🔸");
    	return 0;
  
}*/