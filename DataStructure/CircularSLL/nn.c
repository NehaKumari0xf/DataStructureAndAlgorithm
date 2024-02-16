/* Single Linked List Operations*/
#include<stdio.h>
#include<malloc.h>
struct Node
{
    char name[30];
    char clas[20];
    int roll;
    int maths, eng, hindi, sci, sst;
    struct Node *next;
};
int main()
{
    struct Node *start=NULL;
    struct Node *nnode,*tnode,*pnode,*temp;
    int t_marks,pos,i;
    
    int choice;
    do
    {
        //print menu
        system("cls");
        printf("\n\t\tSingle Linked List Operations");
        printf("\n===========================================================");
        printf("\n||\t\t\tMenu Chart \t\t\t||");
        printf("\n===========================================================");
        printf("\n1. Insertion at first in list\n2. Insertion at sepecific position in list \n3. Insertion at last in list\n4. Deletion at last in list\n5. Deletion at specific position in list\n6. Deletion at first in list\n7. Display List\n8. Exit");-
        printf("\n===========================================================");;
        printf("\nEnter your desired choice:");;
        scanf("%d",&choice);

        switch(choice)
        {
            case 1://code for insert new node at last
                //1. create new node
                    nnode=(struct Node*)malloc(sizeof(struct Node));
                //2. check for node
                    if(nnode==NULL)
                    {
                        printf("\nUnable to create new node.");
                        break;
                    }

                    printf("\nEnter Student Details below-");
                    printf("\n===========================================================");
                    printf("\nEnter name:");
                    fflush(stdin);
                    gets(nnode->name);
                    printf("Enter class:");
                    gets(nnode->clas);
                    printf("Enter roll:");
                    scanf("%d",&nnode->roll);
                    printf("\nEnter Marks of Subjects are :-");
                    printf("\nMaths:");
                    scanf("%d",&nnode->maths);
                    printf("English:");
                    scanf("%d",&nnode->eng);
                    printf("Hindi:");
                    scanf("%d",&nnode->hindi);
                    printf("Science:");
                    scanf("%d",&nnode->sci);
                    printf("Social Science:");
                    scanf("%d",&nnode->sst);
                    nnode->next=NULL;                
              
                    nnode->next=start;
                    start=nnode;
                    nnode=NULL;
                    printf("\nNew data inserted successfully at the beginning of list");
                    break;
           
            case 2://specific loc
                    nnode=(struct Node*)malloc(sizeof(struct Node));
                //2. check for node
                    if(nnode==NULL)
                    {
                        printf("\nUnable to create new node.");
                        break;
                    }

                    printf("\nEnter Student Details below-");
                    printf("\n===========================================================\n");
                    printf("Enter name:");
                    fflush(stdin);
                    gets(nnode->name);
                    printf("Enter class:");
                    gets(nnode->clas);
                    printf("Enter roll:");
                    scanf("%d",&nnode->roll);
                    printf("\nEnter Marks of Subjects are :-");
                    printf("\nMaths:");
                    scanf("%d",&nnode->maths);
                    printf("English:");
                    scanf("%d",&nnode->eng);
                    printf("Hindi:");
                    scanf("%d",&nnode->hindi);
                    printf("Science:");
                    scanf("%d",&nnode->sci);
                    printf("Social Science:");
                    scanf("%d",&nnode->sst);
                    printf("Enter position(integer only): ");
                    scanf("%d",&pos);
                    nnode->next=NULL;                
              
                    if(pos==1)
                    {
                        nnode->next=start;
                        start=nnode;
                        nnode=NULL;
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
        
            case 3://code for insert new node at last
                //1. create new node
                    nnode=(struct Node*)malloc(sizeof(struct Node));
                //2. check for node
                    if(nnode==NULL)
                    {
                        printf("\nUnable to create new node.");
                        break;
                    }
                //3. accept ne data and put it in data part of new node
                    printf("\nEnter Student Details below-");
                    printf("\n===========================================================\n");
                    printf("Enter name:");
                    fflush(stdin);
                    gets(nnode->name);
                    printf("Enter class:");
                    gets(nnode->clas);
                    printf("Enter roll:");
                    scanf("%d",&nnode->roll);
                    printf("\nEnter Marks of Subjects are :-");
                    printf("\nMaths:");
                    scanf("%d",&nnode->maths);
                    printf("English:");
                    scanf("%d",&nnode->eng);
                    printf("Hindi:");
                    scanf("%d",&nnode->hindi);
                    printf("Science:");
                    scanf("%d",&nnode->sci);
                    printf("Social Science:");
                    scanf("%d",&nnode->sst);
                    nnode->next=NULL;

                //4. make new node first if list is empty
                if(start==NULL)
                {
                    start=nnode;
                    nnode=NULL;
                    printf("\nNew data inserted successfully at the end of list");
                    break;
                }

                //5. find the address of last node of list start(it is a pointer)
                    tnode=start;
                while(tnode->next!=NULL)
                {
                    tnode=tnode->next;
                }

                //6. put address of new node in address part of last node
                    tnode->next=nnode;
                    nnode=NULL;
                    printf("\nNew data inserted successfully at the end of list");
                    break;
            
            case 4://deletion at last in sll
                if (start==NULL)//start is a pointer variable it have first node(next) address
                {
                    printf("List is empty.");
                    break;
                }
                if (start->next==NULL)
                {
                    free(start);
                    start=NULL;
                    printf("last node deleted successfully");
                    break;
                    //printf("sorry! list has only one node");
                }
                tnode=start;
                while (tnode->next->next!=NULL)//here -> have higher presedence 
                {
                    tnode=tnode->next;
                }
                    free(tnode->next);
                    tnode->next=NULL;
                    printf("\nLast node deleted successfully at last position of list");
                    break;           
            
            case 5://deletion at specific loc in sll
                if (start==NULL)//start is a pointer variable it have first node address
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
                
                    while (i<pos-1 && pnode!=NULL)
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
                    printf("List is already empty!");
                }
                else{
                    temp=start;
                    start=start->next;
                    free(temp);
                    printf("first record deleted successfully");
                }           
                break;

                
            case 7://code for display list
                if(start==NULL)
                {
                    printf("\n\t\t\t List is empty!");
                }
                else
                {  
                    printf("Contents of list:");
                    tnode=start;
                    printf("\n\t\t\t\t\t\tMarksheet");
                    printf("\n======================================================================================================================");
                    printf("\n%20s   %3s\t%3s\t%3s\t%3s\t%3s\t%3s\t%3s  %3s  %3s ","Name","Class","Roll.no","Maths","English","Hindi","Science","S.Science","Total Marks","Division");
                    printf("\n======================================================================================================================\n");
    
                while(tnode!=NULL)
                {
                    t_marks = tnode->maths + tnode->eng + tnode->hindi + tnode->sci + tnode->sst;
                   
                    printf("\n%20s  %5s   %5d   %5d   %5d   %5d   %5d      %5d \t \t%5d     ", tnode->name,tnode->clas,tnode->roll,tnode->maths,tnode->eng,tnode->hindi,tnode->sci,tnode->sst,t_marks);

                    if (tnode->maths>=30&&tnode->eng>=30&&tnode->hindi>=30&&tnode->sci>=30&&tnode->sst>=30)
                    {
                        if (t_marks>=300)
                            printf("First");
                        else
                        if (t_marks>=225)
                            printf("Second");
                    }
                    else
                    {
                        printf("%10s","Fail");
                    }
                        tnode=tnode->next;
                }
            }printf("\n----------------------------------------------------------x-------------------------------------------------------\n");

            break;
            case 8://code for exit
                return 0;
            default:
            printf("\n Sorry! you have entered invalid option");
        }
        printf("\n");
        system("pause");
    } while (1);
    
}

