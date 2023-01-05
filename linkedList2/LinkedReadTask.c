#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node *next;
}Node;

int main(void)
{
    Node *head = NULL;
    Node *cur =  NULL;
    Node *tail = NULL;

    Node *newNode = NULL;
    int readData;

    while(1)
    {
        printf("input number: ");
        scanf("%d", &readData);
        if(readData<1)
            break;

        newNode= (Node *)malloc(sizeof(Node));
        newNode -> data =readData;
        newNode -> next = NULL;

        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
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
    return 0;
}