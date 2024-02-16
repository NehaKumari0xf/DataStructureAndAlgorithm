#include<iostream>
using namespace std; 
#include<malloc.h>

struct DataOfTeachersAndStudents
{
    char name[50];
    char clas[20];
    int tid,tname,tphone,taddress;
    int id,email,dob,phoneNo,graduationYear,address;
    struct DataOfTeachersAndStudents *next;
};

int main()
{
    struct DataOfTeachersAndStudents *start=NULL;
    struct DataOfTeachersAndStudents *nnode, *tnode, *pnode, *temp;
    int pos,i,choice;

    do
    {
        system("cls");
        cout<<"Students And Teaches Record Management System In C Pragoram With The Help Of Single Linked List";
        cout<<"\n====================================================================================================";
        cout<<"\n||\t\t\tMenu Chart \t\t\t||";
        cout<<"-------------------------------------------------------------------------------------------------------";
        cout<<"\n1. Insertion at first in list\n2. Insertion at sepecific position in list \n3. Insertion at last in list\n4. Deletion at last in list\n5. Deletion at specific position in list\n6. Deletion at first in list\n7. Display List\n8. Exit";
        cout<<"\n====================================================================================================";
        cout<<"\nEnter your desired choice:";
        cin>>choice;

        switch (choice)
        {
        case 1:
            /* code for insertion at first*/
            //create new node i.e. DataOfTeachersAndStudents
            nnode=(struct DataOfTeachersAndStudents*)malloc(sizeof(struct DataOfTeachersAndStudents));
            //check for node
            if (nnode==NULL)
            {
                cout<<"UH-OH!! unable to create new node.";
                break;
            }

            cout<<"\nEnter Teacher Details below :-";
            cout<<"\n====================================================================================================";
            cout<<"\nEnter Teacher Id:";
            cin>>nnode->tid;
            cout<<"\nEnter Name:";
            cin>>nnode->tname;
            cout<<"\nEnter Phone Number";
            cin>>nnode->tphone;
            cout<<"\nEnter Address:";
            cin>>nnode->taddress;
            
            cout<<"\nEnter Student Details below :-";
            cout<<"\n====================================================================================================";
            cout<<"\nEnter Student Id:";
            cin>>nnode->id;
            cout<<"\nEnter Name:";
            fflush(stdin);
            gets(nnode->name);
            cout<<"Enter Class:";
            gets(nnode->clas);
            cout<<"Enter E-mail Adddress:";
            cin>>nnode->email;
            cout<<"Enter Date Of Birth:";
            cin>>nnode->dob;
            cout<<"Enter Phone NUmber:";
            cin>>nnode->phoneNo;
            cout<<"Enter Graduation Year:";
            cin>>nnode->graduationYear;
            cout<<"Enter Address:";
            cin>>nnode->address;
            nnode->next=NULL;

            nnode->next=start;
            start=nnode;
            nnode=NULL;
            cout<<"\nNew Record Of Teacher And Student Inserted Successfully.";          
            break;
            
        case 2:
            /* code for insertion at specific position*/
            //create new node i.e. DataOfTeachersAndStudents
            nnode=(struct DataOfTeachersAndStudents*)malloc(sizeof(struct DataOfTeachersAndStudents));
            //check for node
            if (nnode==NULL)
            {
                cout<<"UH-OH!! unable to create new node.";
                break;
            }

            cout<<"\nEnter Teacher Details below :-";
            cout<<"\n====================================================================================================";
            cout<<"\nEnter Teacher Id:";
            cin>>nnode->tid;
            cout<<"\nEnter Name:";
            cin>>nnode->tname;
            cout<<"\nEnter Phone Number";
            cin>>nnode->tphone;
            cout<<"\nEnter Address:";
            cin>>nnode->taddress;
            
            cout<<"\nEnter Student Details below :-";
            cout<<"\n====================================================================================================";
            cout<<"\nEnter Student Id:";
            cin>>nnode->id;
            cout<<"\nEnter Name:";
            fflush(stdin);
            gets(nnode->name);
            cout<<"Enter Class:";
            gets(nnode->clas);
            cout<<"Enter E-mail Adddress:";
            cin>>nnode->email;
            cout<<"Enter Date Of Birth:";
            cin>>nnode->dob;
            cout<<"Enter Phone NUmber:";
            cin>>nnode->phoneNo;
            cout<<"Enter Graduation Year:";
            cin>>nnode->graduationYear;
            cout<<"Enter Address:";
            cin>>nnode->address;
            nnode->next=NULL;

            if (pos==1)
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
            if (pnode==NULL)
            {
                cout<<"\nUH-OH!! you have inserted invalid positin.";
                free(nnode);
                break;
            }
                nnode->next=pnode->next;
                pnode->next=nnode;
                nnode=NULL;
                cout<<"\nNew Record Teacher And Student Inserted Successfully";
            break;
            
        case 3:
            /* code for insertion at last*/
            //create new node i.e. DataOfTeachersAndStudents
            nnode=(struct DataOfTeachersAndStudents*)malloc(sizeof(struct DataOfTeachersAndStudents));
            //check for node
            if (nnode==NULL)
            {
                cout<<"UH-OH!! unable to create new node.";
                break;
            }

            cout<<"\nEnter Teacher Details below :-";
            cout<<"\n====================================================================================================";
            cout<<"\nEnter Teacher Id:";
            cin>>nnode->tid;
            cout<<"\nEnter Name:";
            cin>>nnode->tname;
            cout<<"\nEnter Phone Number";
            cin>>nnode->tphone;
            cout<<"\nEnter Address:";
            cin>>nnode->taddress;
            
            cout<<"\nEnter Student Details below :-";
            cout<<"\n====================================================================================================";
            cout<<"\nEnter Student Id:";
            cin>>nnode->id;
            cout<<"\nEnter Name:";
            fflush(stdin);
            gets(nnode->name);
            cout<<"Enter Class:";
            gets(nnode->clas);
            cout<<"Enter E-mail Adddress:";
            cin>>nnode->email;
            cout<<"Enter Date Of Birth:";
            cin>>nnode->dob;
            cout<<"Enter Phone NUmber:";
            cin>>nnode->phoneNo;
            cout<<"Enter Graduation Year:";
            cin>>nnode->graduationYear;
            cout<<"Enter Address:";
            cin>>nnode->address;
            nnode->next=NULL;

            //make new node first if list is empty
            if (start==NULL)
            {
                /* code */
            }
            
            break;
        default:
            break;
        }
    } while (1);
    
}