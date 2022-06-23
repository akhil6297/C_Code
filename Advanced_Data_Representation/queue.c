#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
int data;
struct node * next;
} Node;

// Node *head=NULL;
Node *front=NULL;
Node *rear=NULL;


int main()
{
    AddItem();
    AddItem();
    AddItem();
    DisplayQueue();
    // DeleteItem();
    // DisplayQueue();
 
    return 0;
}

void AddItem(){
    Node *tmp=NULL;
    tmp = (Node *)malloc(sizeof(Node));
    printf("In Add item function, so enter the adding item details\n");
    scanf("%d", &tmp->data);
    tmp->next=NULL;

    if(front==NULL && rear==NULL){
        front=tmp;
        rear=tmp;
    }
    else{
        rear->next=tmp;
        rear=tmp;
    }
}

void DisplayQueue(){
    if(front==NULL){
        printf("Queue is EMpty\n");
    }
    else{
        Node *p;
        p=front;
        while(p!=NULL){
            printf("%d<-- ", p->data);
            p=p->next;
        }
        printf("\n");
    }
}

void DeleteItem(){
    Node *fr=front;
    front=fr->next;
    fr->next=NULL;
    free(fr);
}