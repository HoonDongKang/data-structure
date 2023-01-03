#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node * next;
}Node;


int main(void)
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readData;

    // input data
    while(1)
    {
        printf("input number : ");
        scanf("%d", &readData);
        if(readData<1)
            break;

        newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = readData;
        newNode -> next = NULL;

        if(head ==NULL)
            head = newNode;
        else 
            tail -> next = newNode;
        tail = newNode;
    }
    printf("\n");

    //print data
    printf("print all data : ");
    if(head==NULL)
    {
        printf("None data.");
    }
    else
    {
        cur=head;
        printf("%d ", cur->data);
        while(cur->next != NULL)
        {
            cur = cur->next;
            printf("%d ",cur -> data);
        }
    }
    printf("\n\n");

    //free memory
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;
        printf("delete %d \n",head->data);
        free(delNode);

        while(delNextNode !=NULL)
        {
            delNode=delNextNode;
            delNextNode= delNextNode->next;

            printf("delete %d \n",head->data);
            free(delNode);
        }
    }

    return 0;
}