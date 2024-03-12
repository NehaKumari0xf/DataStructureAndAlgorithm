/* C Program to demonstrate Traversal Of an Array
=================================================
The process of accessing every element os an array is called traversal of an array.
Traversal can be forward or backward.
For traverse an array loop is used. where loop counter is used as index of array.
because array size is pre defined so generally for loop is used to traverse the array as:

for(i=0; i<SISE_OF_ARRAY;i+=1)
{
    process ith element of array;
}
 Write a C program that will read 10 numbers from user and print all entered number on screen*/

 #include<stdio.h>
 #include<process.h>
 int main()
 {
     /*Because I have to store 10 integer value so I will create an array of 10 elements*/
     int arr[10];
     int i;

     //now travese the array an store value in each element by acception value from user
     for(i=0;i<10;i+=1)
     {
         printf("enter value %d:",i+1);
         scanf("%d",&arr[i]);
     }
     //print all entered value
     //traverse the list
     printf("\nAll entered values are:");
     for(i=0;i<10;i+=1)
     {
         printf("\n%d",arr[i]);
     }
     //print all record in reverse order as entered
     //travers list in reverse order
     printf("\nArray in reverse order as entered:");
     for(i=9;i>=0;i-=1)
     {
         printf("\n%d",arr[i]);
     }
     //twice th each element of list and again print the value of list
     //for twice all element traverse the list
     for(i=0;i<10;i+=1)arr[i]*=2;
    //print all values(to print all values traverse the list)
    printf("Content of array after twice:");
    for(i=0;i<10;i+=1)printf("\n%d",arr[i]);

     printf("\n");
     system("pause");
     return 0;
 } 