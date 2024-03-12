#include<stdio.h>
#define sz 100
#include <math.h>
int main()
{
    int arr[sz],tno,WannaMore=1,i;
    float sqr,cbrt;
/*
    printf("How many number you have:(<=%d)",sz);
    scanf("%d",&tno);
    printf("\n====================================");
*/

/*
    for(i=0;i<sz&&WannaMore==1;i+=1)
    {
        printf("\nEnter any number %d(0 for stop):", i+1);
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        WannaMore=0;
    }
    tno=i-1;
    */

   
    for(i=0;i<sz;i+=1)
    {
        printf("\nEnter any number %d(0 for stop):", i+1);
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        break;
    }
    tno=i;
    printf("\n---------------------------------");
  
    //code for square
    printf("\n");
    for(i=0;i<tno;i+=1)
    {
        printf("\nThe square of %d:- %d",arr[i],arr[i]*arr[i]);
    }
    printf("\n..................................");
    
    //code for cube
    printf("\n");
    for(i=0;i<tno;i+=1)
    {
        printf("\nThe cube of %d:- %d",arr[i],arr[i]*arr[i]*arr[i]);
    }
    printf("\n..................................");
    
    //code for squareroot
    printf("\n");
    for(i=0;i<tno;i+=1)
    {
        printf("\nThe squareroot of %d:- %f",arr[i],sqr=sqrt(arr[i])); 
    }
    printf("\n..................................");
    
    //code for cuberoot
    printf("\n");
    for(i=0;i<tno;i+=1)
    {
        printf("\nThe Cuberoot of %d:- %f",arr[i],cbrt=cbrtf(arr[i])); 
    }

return 0;

}