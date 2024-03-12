
/*Array all operations in one*/

#include<stdio.h>
#include<process.h>

int arr[100],item,size,i,position,ch;


int menu()
{    
    printf("\n------------------------------------");
    printf("\n\t\tOptions");
    printf("\n------------------------------------");
    printf("\n1. Create list");
    printf("\n2. Insertion at  specific location");
    printf("\n3. Deletion at specific location");
    printf("\n4. Display List");
    printf("\n5. Exit");

    do
    {
        printf("\n\nEnter your choice(1-5):");
        scanf("%d",&ch);
        if(ch>0 && ch<=5)
        return ch;
    
    } while (1);
}

void line()
{
    int i;
    printf("\n");
    for (i = 0; i < 50; i++)
    printf("=");
      
}

void createList()
{
     printf("\nEnter the size of array");
    scanf("%d",&size);
    printf("\nEnter the elements into the array");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
   
}
void insertion()
{
    printf("\nEnter new item in array:");
    scanf("%d",&item);
    printf("\nEnter position no for insertion:");
    scanf("%d",&position);

    for ( i = size; i >= position; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position] = item;
    size++;
    
}
   
void deletion()
{
    printf("\nEnter position no for deletion:");
    scanf("%d",&position);
    if(size==0)
    {
        printf("list is empty");  
    }  
        for(i=position;i<=size-1;i++)
            {
                arr[i]=arr[i+1];
            } 
         size--;

            printf("\n%d position deleted successfully.",position);
    
}

void display()
{
   printf("\nTotal elements in the array are:");
   for ( i = 0; i < size; i++)
   {
        printf("\n%d",arr[i]);
   }
   
}

int main()
{
    printf("\nEnter the size of array");
    scanf("%d",&size);
    printf("\nEnter the elements into the array");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    do
    {
        switch (menu())
        {
        case 1:
            line();
            createList();
            break;
        case 2:
            line();
            insertion();
            break;
        case 3:
            line();
            deletion();
            break;
        case 4:
            line();
            display();
            break;
        case 5:
            break;
            default:
        printf("\n OOPs! You have entered invalid choice");
        }
        printf("\n");
        system("pause");
    } while (1);
    
}













