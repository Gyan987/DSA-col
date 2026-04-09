#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert()
{
    struct Node *newNode, *temp;
    int value;

    // create and add values to new node
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;
    //-------------

    //     Step 1:
    // head → NULL

    // Step 2:
    // newNode → [10 | NULL]

    // Step 3:
    // head = newNode

    // Step 4:
    // head -> [10 | NULL]
    // meaning of if (head == NULL) is to check if the linked list is empty or not. If head is NULL, it means the linked list is empty and we can directly assign newNode to head. If head is not NULL, it means there are already nodes in the linked list and we need to traverse to the end of the list and add newNode there.
    if (head == NULL)
    {
        head = newNode;
    }
    //-------------------------------------------
    else
    {
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    printf("Node inserted successfully \n");
}

void delete(){
    if(head==NULL){
        printf("List is empty\n");
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        struct Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void display()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        printf("The linked list is :");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;  
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}