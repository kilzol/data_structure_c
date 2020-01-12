#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data ;
   struct node* next;

};

void printlist(struct node* n)
{
    while(! NULL)
    {
        printf("%d \n",n->data);
        n=n->next;
    }
}
int main()
{    
    struct node* head =NULL;
    struct node* first =NULL;
    struct node* second =NULL;
    int x;

    head =(struct node*)malloc(sizeof(struct node));
    first =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));

    head->data =21;
    head->next = first;
    first->data = 22;
    first->next = second;
    second->data=24;
    second->next=NULL;
    printf("enter 1 to print content of linked list and 2 to exit");
    scanf("%d",&x);
    if(x==1)
    {
        printlist(head);
    }
    else if(x==2)
    exit(0);
    return 0;
}