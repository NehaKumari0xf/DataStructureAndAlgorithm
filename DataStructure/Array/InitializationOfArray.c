/*Initialization Of Array*/
/*
Whenever an array is created its all elements contains garbage value
We can initialize an array in C
======================================
Syntax 1:
dataType arrayName[SIZE]={InitializersSeperatedByComma};
Note: Number of initializers should not be more than size of array
ex: int a2[5]={10,20,30,40,50};

int a3[5]={10,20,30,40,50,60}; //Error:Initializers are more than size of array

When initializing array, number of initializers may be less than size of array:
int a4[10]={1,2,3,4,5,6,7,8};
In Above initialization the size of array in 10 but the number of initializer is 8 then what about elemnt at index 8 and 9
 If number of initializers is less than the size of array then remaining all elements are initialized by 0 automatically.

We can Initialize an array's all element by 0 as:
int a5[100]={0}; //All elements will be initialized by 0

int a6[200]={5}; //0'th element will be initialized by 5 and all remaining elements will be initialized by 0

An Array can be also initialized as:
dataType arrayName[]={initializers};
ex:
int a6[]={12,34,56,78,89};
we can omit size of array when creating only if initializer is given.
Here the  size of array will be equal to number of initializers


*/
#include<stdio.h>
int main()
{
    int a1[10];//here an integer array of 10 elements is created but not initialized so, its all element will containt garbage value
    int a2[10]={1,2,3,4,5,6,7,8,9,10};//Here an integer array of 10 elements is created and all elements of array are initialized
    //int a3[5]={10,20,30,40,50,60};//Error/Warning
    int a4[12]={100,200,300,400,500,600};//Initializers are less than size of array,remaining elements will be initialized by 0
    int a5[10]={0};//all elemts will be initialized by 0
    int a6[]={1,2,3,4,5,6};//size of array will be number of initializer i.e. 6
    int i;
    printf("\nContents of uninitialized array a1=");
    for(i=0;i<10;i++)
    printf("\na1[%d]=%d, ",i,a1[i]);

    printf("\nContents of initialized array a2=");
    for(i=0;i<10;i+=1)
    printf("\na2[%d]=%d",i,a2[i]);

    printf("\nContents of less initializer array a4=");
    for(i=0;i<12;i+=1)
    printf("\na4[%d]=%d",i,a4[i]);

    printf("\nContents of array a5(all elements are initialized by 0):");
    for(i=0;i<10;i+=1)
    printf("\na5[%d]=%d",i,a5[i]);

    printf("\ncontents of array a6(Size is not provided at the time of creation):");
    for(i=0;i<6;i+=1)
    printf("\na6[%d]=%d",i,a6[i]);
    return 0;

}