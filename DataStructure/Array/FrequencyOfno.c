#include<stdio.h>
int main()
{
    int a[30]={3,9,9,3,12,33,44,54,34,23,23,44,56,56,45,77,89,89,1,2,11,22,33,98,87,76,69,56,43,33};
    int b,i,frequency=0;

    printf("Enter any number:");
    scanf("%d",&b);
    
    //code to find the list of no of index of that no
     for(i=0;i<30;i++)
     {
        if(a[i]==b)
		printf("\n%d is available in list at index %d",b,i);
     }

    //code to find the no of frequency of that no
    for(i=0;i<30;i++)
    {
        if(a[i]==b)
        frequency++; 
    }
      printf("\n\n%d is available in list and its frequency is %d ",b,frequency);
    
    
    return 0;
}

