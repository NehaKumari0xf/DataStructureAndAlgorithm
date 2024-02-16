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
        