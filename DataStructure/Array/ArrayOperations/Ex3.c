#include<stdio.h>

void display(int arr[], int n)
{
    
    for ( int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
}

int Insertion(int arr[], int size,int element,int  cap,int  position)
{

    if (size>=cap)
    {
        printf("\nSorry1 List is already full");
    }

    for(int i = size-1; i>= position; i--)
    {
        arr[i-1] = arr[i];
    }arr[position] = element;
    return 1;
    
}

int main()
{
    int arr[100] = {2,4,6,8,10,12,14,16,18,20,33,1,3,5,7,8};
    int size = 16;
    int element, position;

    printf("Enter any no:");
    scanf("%d",&element);
    printf("Enter position no(1-100):");
    scanf("%d",&element);
    display(arr,size);
    Insertion(arr,size,element,100,position);
    size+=1;
    display(arr,size);

    return 0;
   
}