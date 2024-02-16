#include<stdio.h>
#include<malloc.h>

struct Node
{
    /* data */
    int data;
    struct Node *next;
};

int main()
{
    struct Node *start=NULL;
    struct Node *tnode, *lnode, *nnode, *temp, *pnode;
    int newData, i, pos;

    int choice;
    do
    {
        //print menu
        system("cls");
        printf("\n\t\tSingle Linked List Operations");
        printf("\n===========================================================");
        printf("\n||\t\t\tMenu Chart \t\t\t||");
        printf("\n===========================================================");
        printf("\n1. Insertion at first in list\n2. Insertion at sepecific position in list \n3. Insertion at last in list\n4. Deletion at first in list\n5. Deletion at specific position in list\n6. Deletion at last in list\n7. Display List\n8. Exit");-
        printf("\n===========================================================");;
        printf("\nEnter your desired choice:");;
        scanf("%d",&choice);

        switch (choice)
        {
        case /* constant-expression */ 1:
            /* create a new node */
            nnode=(struct Node*)malloc(sizeof(struct Node));
            
            if (nnode==NULL)
            {
                /* code */
                printf("\nUnable to create a new node.");
                break;
            }

            printf("\nEnter New Data:");
            scanf("%d", &newData);

            /*Put data in data part and null in address part of new node */
            nnode->data=newData;
            nnode->next=NULL;

            /* If list is empty */
            if (start==NULL)
            {
                /* code */
                /* Put the address part of  new node in itself address part */
                nnode->next=nnode;
                /* Put athe address of nnode in start */
                start=nnode;
                break;
            }
            /* Find the address of last node of list */
            lnode=start;
            while (lnode->next!=start)
            {
                /* code */
                /* move lnode on next node */
                lnode=lnode->next;
            }
            /* Put the address of first node f list in addresss part of new node */
            nnode->next=start;
            /* put address of new node in start */
            start=nnode;
             /*Put address of new node in addresss part of last node*/
             lnode=nnode;
            break;
            
            case 2:
            nnode=(struct Node*)malloc(sizeof(struct Node));
            
            if (nnode==NULL)
            {
                /* code */
                printf("\nUnable to create a new node.");
                break;
            }

            printf("\nEnter New Data:");
            scanf("%d", &newData);
            printf("\nEnter Position:");
            scanf("%d", &pos);

            /*Put data in data part and null in address part of new node */
            nnode->data=newData;
            nnode->next=NULL;
            
            
                    if(pos==1)
                    {
                        nnode->next=nnode;
                        start=nnode;
                    }
                        pnode=start;
                        i=1;
                    while (i<pos-1 && pnode!=NULL)
                    {
                        pnode=pnode->next;
                        i++;
                    }
                    if(pnode==NULL)
                    {
                        printf("\nsorry invalid position given");
                        free(nnode);
                        break;
                    }
                        nnode->next=pnode->next;
                        pnode->next=nnode;
                        nnode=NULL;
                        printf("\nNew Data insrted successfully in the list");
                        break;

            case /* constant-expression */ 3:
            /* create a new node */
            nnode=(struct Node*)malloc(sizeof(struct Node));
            
            if (nnode==NULL)
            {
                /* code */
                printf("\nUnable to create a new node.");
                break;
            }

            printf("\nEnter New Data:");
            scanf("%d", &newData);

            /*Put data in data part and null in address part of new node */
            nnode->data=newData;
            nnode->next=NULL;
            if(start==NULL)
                {
                    start=nnode;
                    nnode->next=start;
                    printf("\nNew data inserted successfully at the end of list");
                    break;
                }

                //5. find the address of last node of list start(it is a pointer)
                    tnode=start;
                while(tnode->next!=start)
                {
                    tnode=tnode->next;
                }

                //6. put address of new node in address part of last node
                    tnode->next=nnode;
                    nnode->next=start;
                    printf("\nNew data inserted successfully at the end of list");
                
            break;

            case 4:
             if (start==NULL)
             {
                /* code */
                printf("\nList is empty.");
                break;
             }
             lnode=start;
             while (lnode->next!=start)
             {
                /* code */
                lnode=lnode->next;
             }
             if (lnode==start)
             {
                /* code */
                free(start);
                start=NULL;
                break;
             }
             temp=start;
             start=start->next;
             lnode->next=start;
             free(temp);
             
            break;
            case 5://deletion at specific loc in circular sll
                if (start==NULL)
                {
                    printf("List is already empty!");
                    break;
                    
                }if(pos==1)
                {
                    temp=start;
                    start=start->next;
                    free(temp);
                    temp=NULL;
                    printf("1st record delete successfully.");
                    break;
                }
                if (pos<1)
                {
                    printf("Sorry!! not a valid position given.");
                }
                
                pnode=start;
                i=1;
                    printf("Enter position(integer only) except 1st position: ");
                    scanf("%d",&pos);
                
                    while (i<pos-1 && pnode!=start)
                    {
                        pnode=pnode->next;
                        i++;
                    }
                    if(pnode==NULL)
                    {
                        printf("\nsorry invalid position given!!");
                        break;
                    }
                    temp=pnode->next;
                    pnode->next=temp->next;
                    free(tnode);
                    printf("Record deleted successfully at given position");

                    break;           

            case 6://code for deletion at first
                if (start==NULL)
                {
                    printf("List is empty.");
                    break;
                }
                
                if (start->next==start)
                {
                    free(start);
                    start=NULL;
                    printf("Last node deleted successfully");
                    break;
                    //printf("sorry! list has only one node");
                }
                tnode=start;
                while (tnode->next->next!=start)//here -> have higher presedence 
                {
                    tnode=tnode->next;
                }
                    free(tnode->next);
                    tnode->next=start;
                    printf("\nLast record deleted successfully at last position of list");
                    break;
            
        case 7:
        if (start==NULL)
        {
            /* code */
            printf("\nList is empty");
            break;
        }else{
            printf("Contents of list:");
            tnode=start;
            do
            {
                /* code */
                printf("%d,", tnode->data);
                tnode=tnode->next;
            }while (tnode!=start);          
        }    
        break;
        case 8://code for exit
                return 0;
        default:
        printf("\nUH-OH!! You have entered an invalid choice :(");
        }
        printf("\n");
        system("pause");

    } while (1);
    
}