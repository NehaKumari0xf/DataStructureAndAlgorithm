#include<stdio.h>
int main()
{
    int a[10]={1,2,3,1,2,4,5,4,6,7};
    int i,j,b;
     
     printf("Enter any no:");
     scanf("%d",&b);
     
      for(i=0;i<10;i++)
     {
        if(a[i]==b)
		printf("\n%d is available in list at index %d",b,i);
     }
     
     int c[10];
     
     for(i=0;i<10;i+=1)//loop for copy
    {
    c[i]=i;//all the elements of a index no is going to copying in c array with the help of above for loop.
    }
    
     for(i=0;i<10;i++)
     {
        if(c[i]==i)
		printf("\n\n\n%d is available in list at index %d",c[i],i);
     }



return 0;

}