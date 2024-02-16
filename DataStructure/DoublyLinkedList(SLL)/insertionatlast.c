#include<stdio.h>
#include<malloc.h>

struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
};

int main()
{
    struct Node *start=NULL;
    struct Node *nnode,*lnode,*tnode,*pnode, *slnode, *temp;
    int ch,newData;
    int loc,i;

    do
    {
        system("cls");
        printf("Doubly Linked List Operatoins");
        printf("\n======================================");
        printf("\n1. Insertion at first.\n2. Insertion at last.\n3. Insertion at specific location");
        printf("\n4. Deletion at first.\n5. Deletion at last.\n6. Deletion at specific location.");
        printf("\n7. Display.\n8. Display in reverse order.");
        printf("\n9. Exit.");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch (ch)
        {
            //code for insertion at first
        case 1://step 1:- create a new node
            nnode=(struct Node*)malloc(sizeof(struct Node));
        
        //step2:- check for node, if node not created
            if (nnode==NULL)
            {
                printf("\nError in node creation!");
                break;
            }

        // accept new data and put it in data part of new node
            printf("\nEnter new data:");
            scanf("%d",&newData);
                
        //step3:- Put data in data part and NULL in both address part of new node
            nnode->data=newData;
            nnode->next=nnode->pre=NULL;

        //step4:- If list is empty then make new node 1st node
            if (start==NULL)
            {
                start=nnode;
                nnode=NULL;
                printf("\nNode inserted successfully.");
                break;
            }
            
        //step6:- Put the address of 1st node in next part of new node
            nnode->next=start;

        //step7:- Put the address of new node in previous part of 1st node
            start->pre=nnode;
        
        //step8:- put the address of new node in start
            start=nnode;

        //step9:- Put null in nnode
            nnode=NULL;
            break;
            
        //code for insertion at last
        case 2:
        //step 1:- create a new node
            nnode=(struct Node*)malloc(sizeof(struct Node));
        
        //step2:- check for node
            if (nnode==NULL)
            {
                printf("\nUh-OH Unable to create new node!");
                break;
            }

        // accept new data and put it in data part of new node
            printf("\nEnter new data:");
            scanf("%d",&newData);
                
        //step3:- Put data in data part and NULL in both address part of new node
            nnode->data=newData;
            nnode->pre=nnode->next=NULL;

        //step4:- If list is empty then make nnode 1st node
            if (start==NULL)
            {
                start=nnode;
                nnode=NULL;
                printf("\nNode inserted successfully.");
                break;
            }
            

        //step6:- list is not empty. find the address of last node of list
            lnode=start;
            while (lnode->next!=NULL)
            {
                //move on next node
                lnode=lnode->next;
            }
        
        //step7:- Put the address of last node in previous part of new node
            nnode->pre=lnode;

        //step8:- Put the address of new node in next part of last node
            lnode->next=nnode;

        //step9:- Put null in nnode
            nnode=NULL;
            break;
        
            //code for insertion at specific location
        case 3:
        //step 1:- create a new node
            nnode=(struct Node*)malloc(sizeof(struct Node));
        
        //step2:- check for node
            if (nnode==NULL)
            {
                printf("\nUh-OH Unable to create new node!");
                break;
            }

        // accept new data and put it in data part of new node
            printf("\nEnter new data:");
            scanf("%d",&newData);
            printf("\nEnter Position:");
            scanf("%d",&loc);           
            nnode->data=newData;
            nnode->pre=nnode->next=NULL;

            //code to check if position is =1
            if(loc==1)
            {//follows the steps of insertion at first
                nnode->next=start;
                start->pre=nnode;
                start=nnode;
                nnode=NULL;
                break;
            }
            //traverse the list and find the address of (pos-1)th node of list
            pnode=start;
            i=1;// i = our current node index number
                while (i<loc-1 && pnode!=NULL)
                {
                    //move on next node
                    pnode= pnode->next;
                    i++;
                }
                
            if(pnode==NULL)
            {
                printf("\nsorry invalid position given");
                free(nnode);
                break;
            }            
            //code to check if position is = last
            if (pnode->next==NULL)
            {//follows the steps of insertion at last
                nnode->pre=lnode;
                lnode->next=nnode;
                nnode=NULL;
            }
            //put the address of current node at Position in next part of new node
            nnode->next=pnode->next;
            
            //put the address of new noode in pre part of current node at position
            pnode->next->pre=nnode;                          

            //put address of current previous node in pre part of new node
            pnode->next=nnode;

            //put address of new node in next part of current previou node
            nnode->pre=pnode;

            //put null in node
            nnode=NULL;
            printf("\nNew Data insrted successfully in the list");
        break;

        case 4: //code for deletion at first
            //check if list is empty
            if (start==NULL)
            {
                printf("\nList is already empty!");
                break;
            }

            //if list has only one node
            if (start->next==NULL)
            {
                free(start);
                start=NULL;
                break;
            }
            //Now list is not empty and have more than one node

            //put the address of 2nd node in start
            start= start->next;
            //free previous 1st node
            free(start->pre);
            //put null in pre part of 1st node
            start->pre=NULL;
            printf("\nFist node delete successfully..");        
        break;

        case 5://code for deletion at last
            //check if list is empty
            if (start==NULL)
            {
                printf("\nList is already empty!");
                break;
            }
            //if list has only one node
            if (start->next==NULL)
            {
                //free 1st node
                free(start);
                //put null in start
                start=NULL;
                break;
            }
            //Now list has more than one node

            //Traverse the list and find the address of 2nd last node.
                slnode=start;
                while (slnode->next->next==NULL)
                {
                    /* move on next node */
                    slnode=slnode->next;
                }

                //delete last node
                free(slnode->next);
                //put null in next part f 2nd last node
                slnode=NULL;
                printf("\nLast node delete successfully....");
            
        break;

            //code for deletion at specific location
        case 6:
                if (start==NULL)
                {
                    printf("\nList is already empty!");
                    break;
                }
                 printf("\nEnter position:");
                 scanf("%d",&loc);

                 if (loc==1)
                 {
                    if (start->next==NULL)
            {
                free(start);
                start=NULL;
                break;
            }
            //Now list is not empty and have more than one node

            //put the address of 2nd node in start
            start= start->next;
            //free previous 1st node
            free(start->pre);
            //put null in pre part of 1st node
            start->pre=NULL;
            printf("\nFist node delete successfully..");        
            break;
                 }

                 i =1; //i shows our current node number
                 pnode=start;
                 while (i<loc-1 && pnode!=NULL)
                 {
                    pnode=pnode->next;
                    i+=1;
                 }
                 if (pnode==NULL)
                 {
                printf("\nInvalod position.");
                break;
                 }

                 if (pnode->next->next==NULL)
                 {
                    //if list has only one node
            if (start->next==NULL)
            {
                //free 1st node
                free(start);
                //put null in start
                start=NULL;
                break;
            }
            //Now list has more than one node

            //Traverse the list and find the address of 2nd last node.
                slnode=start;
                while (slnode->next->next==NULL)
                {
                    /* move on next node */
                    slnode=slnode->next;
                }

                //delete last node
                free(slnode->next);
                //put null in next part f 2nd last node
                slnode=NULL;
                printf("\nLast node delete successfully....");
            break;
                 }
                 temp=pnode->next;
                 pnode->next=pnode->next->next;
                 pnode->next->pre=pnode;
                 free(temp);
                 temp=NULL;
                 pnode=NULL;                                                                                 
                
        break;

        case 7://code for display list
            if(start==NULL)
            {
                printf("\n List is empty!");
            }
            else
            {
                printf("Contents of list are as: ");
                tnode=start;
                while(tnode!=NULL)
                {
                    printf("%d,", tnode->data);
                    tnode=tnode->next;
                }
            }
            break;
            case 8://code to display in reverse order
            if (start==NULL)
            {
                printf("\nList is empty");
                break;
            }
            printf("\nList data in reverse order are as: ");
            //find the address of last node.
            //traverse list in forward order and find the address of last node.
            tnode=start;
            while (tnode->next!=NULL)
            {
                tnode=tnode->next;
            }
            //now traverse the list in reverse order

            while (tnode!=NULL)
            {
                //print the data of current node
                printf("%d, ",tnode->data);
                //now move on previous node
                tnode=tnode->pre;
            }
            break;
            case 9://code for exit
                return 0;
            default:
            printf("\n UH-OH! You have entered an invalid option!!");
        }
        printf("\n");
        system("pause");
    } while (1);
    



}
