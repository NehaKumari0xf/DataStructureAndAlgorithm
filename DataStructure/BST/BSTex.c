/* Binary Search Tree Example*/
#include<stdio.h>
#include<malloc.h>
#include<process.h>
/* Create Node Structure */
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

typedef struct Node BSTNode;

BSTNode* createNewNode()
{
	BSTNode *newNode=NULL;
	newNode=(BSTNode*)malloc(sizeof(BSTNode));
	if(newNode!=NULL)
	{
		newNode->data=0;
		newNode->left=NULL;
		newNode->right=NULL;
	}
	return newNode;	
}

int insertInBST(BSTNode *root,int data)
{
	BSTNode *newNode;
	if(root==NULL)return 0;
	
	if(root->data==data)return 0;
	
	if(data<root->data)
	{
		//perform insertion at left
		if(root->left==NULL)
		{
			//insert at left child
			newNode=createNewNode();
			if(newNode!=NULL)
			{
				newNode->data=data;
				root->left=newNode;
				return 1;
			}
			else
				return 0;
		}
		else
		{
			return insertInBST(root->left,data);
		}
	}
	else
	{
		//perform insertion at right
		if(root->right==NULL)
		{
			//insert at this position
			newNode=createNewNode();
			if(newNode!=NULL)
			{
				newNode->data=data;
				root->right=newNode;
				return 1;
			}
			else
				return 0;
		}
		else
		{
			return insertInBST(root->right,data);
		}
	}

}

void traverseBSTInInOrder(BSTNode* root)
{
	if(root==NULL)return;
	traverseBSTInInOrder(root->left);
	printf("%d, ",root->data);
	traverseBSTInInOrder(root->right);
}
int main()
{
	BSTNode *root=NULL;
	int data;
	int choice;
	do
	{
		printf("\nBinary Search Tree Operations\nMenu\n=========\n1. Add New Item\n2. Traverse Tree (Pre Order)\n3. Traverse Tree (In Order Traversal)\n4. Travers Tree (Post Order Traversal)\n5. Travers Tree (All)\n6. Delete Node\n7. Find Height Of Tree\n8. Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1://code for insert new item in tree
			printf("Enter new Data to insert:");
			scanf("%d",&data);
			if(root==NULL)
			{
				//tree is empty so create a new node and make it root node
				root=createNewNode();
				if(root!=NULL)
				{
					root->data=data;
					printf("\n Data Inserted successfully");
				}
				else
				{
					printf("\nData Insertion failure!");
				}		
				
			}
			else
			{
				if(insertInBST(root,data))
				printf("\nData Inserted successfully!");
				else
				printf("\nData Insertion failure!");
			}
			break;
			case 2://code for traversal of BST (Pre Order)
			break;
			case 3://code for traversal of BST (In Order)
			printf("\n");
			traverseBSTInInOrder(root);
			break;
			case 4://code for traversal of BST (Post Order)
			break;
			case 5://code for traversal of BST (All Order)
			break;
			case 6://code for deleting node
			break;
			case 7://code for find height of tree
			break;
			case 8://code for exit from program
			exit(0);
			default://print invalid option selected
			printf("\nOOPS! You have selected an invalid option");
		}
		
	}while(1);
}
