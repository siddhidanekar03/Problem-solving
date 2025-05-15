#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
};


struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void addBeg(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}


void addEnd(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
	{
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) 
	{
        temp = temp->next;
    }
    temp->next = newNode;
}


void addAt(struct Node** head, int data, int pos) 
{
	int i;
    struct Node* newNode = createNode(data);
    if (pos == 0) 
	{
        addBeg(head, data);
        return;
    }

    struct Node* temp = *head;
    for ( i = 0; temp != NULL && i < pos - 1; i++) 
	{
        temp = temp->next;
    }
    if (temp == NULL) 
	{
        printf("Invalid position\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


void delBeg(struct Node** head) 
{
    if (*head == NULL) 
	{
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}


void delEnd(struct Node** head) 
{
    if (*head == NULL) 
	{
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == NULL) 
	{
        free(temp);
        *head = NULL;
        return;
    }

    struct Node* prev = NULL;
    while (temp->next != NULL) 
	{
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}


void delAt(struct Node** head, int pos) 
{
	int i;
    if (*head == NULL) 
	{
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head;
    if (pos == 0) 
	{
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for ( i = 0; temp != NULL && i < pos; i++) 
	{
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) 
	{
        printf("Invalid position\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}


void display(struct Node* head) 
{
    struct Node* temp = head;
    while (temp != NULL) 
	{
        printf("%4d", temp->data);
        temp = temp->next;
    }
}

int main() 
{
	int d, pos, opt;
    struct Node* head = NULL;
    while(1)
    {
	
		printf("\nLinked List\n1.Insert at Begin\n2.Insert at position\n3.Insert at End\n4.Delete begin\n5.Delete at position\n6.Delete at end\n7.Display\n8.Exit\nEnter choice : ");
		scanf("%d",&opt);
		if(opt>7)
			break;
		switch(opt)
		{
			case 1:
				printf("\nEnter data to be inserted : ");
				scanf("%d",&d);
				addBeg(&head,d);
			break;
			
			case 2:
				printf("\nEnter position of data to be deleted : ");
				scanf("%d",&pos);
				addAt(&head,d,pos);
			break;
			
			case 3:
				printf("\nEnter data to be inserted : ");
				scanf("%d",&d);
				addEnd(&head,d);
			break;
			
			case 4:
				delBeg(&head);
			break;
			
			case 5:
				printf("\nEnter data to be inserted : ");
				scanf("%d",&d);
				printf("\nEnter position : ");
				scanf("%d",&pos);
				addAt(&head,d,pos);
			break;
			
			case 6:
				delEnd(&head);
			break;
			
			case 7:
				display(head);
			break;
			
			case 8:
				return 0;
			
		}
	}

}

