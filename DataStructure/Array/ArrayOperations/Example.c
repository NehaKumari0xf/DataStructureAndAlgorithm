/*Array Operations*/
#include<stdio.h>
#define SIZE 10
int main()
{
int list[SIZE],totalElement=0;
int i,choice,newData;
do
{
    system("cls");
    printf("\nOptions\n================");
    printf("\n1. Insert New Data at first");
    printf("\n2. Insert new data at last");
    printf("\n3. Display List");
    printf("\n4. Exit");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1://code for insertion at first
             if(totalElement==SIZE)
            {
                printf("\nSorry! List is already full.");
                break;
            }
            //accept new data
            printf("\nEnter new data:");
            scanf("%d",&newData);
            //empty the oth element of list
            for(i=totalElement-1;i>=0;i-=1)
            {
                list[i+1]=list[i];
            }
            //put newdta at oth element
            list[0]=newData;
            //increase totalElement by 1
            totalElement+=1;
            printf("\n %d inserted successfully at the begning of list.",newData);
        break;
        case 2://code for insertion at last
            if(totalElement==SIZE)
            {
                printf("\nSorry! List is already full.");
                break;
            }
            //accept new data
            printf("\nEnter new data:");
            scanf("%d",&newData);
            //put new data at end of list
            list[totalElement]=newData;
            //increase totalElement by 1
            totalElement+=1;
            printf("\n %d added successfully at the end of list",newData);

        break;
        case 3://code to print list
            if(totalElement==0)
            {
                printf("\n List is Empty!");
                break;
            }
            printf("\nList Data=");
            for(i=0;i<totalElement;i++)
            {
                printf("%d",list[i]);
                //print seperator
                if(i<totalElement-1)
                    printf(", ");
                
            }
        break;
        case 4://code for exit from progam
        return 0;
        default:
        printf("\n OOPs! You have entered invalid choice");
    }
    //pause code to move on next iteration
    printf("\n");
    system("pause");
} while (1);


}