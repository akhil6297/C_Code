#include <stdio.h>
#include <stdlib.h>
// #include "list.h"

#define NAME_SIZE 10

// Abstract description of properties
// struct student {
//     int rollno;
//     char name[NAME_SIZE];
// };
// typedef struct student Item;

typedef struct node
{
int data;
struct node * next;
} Node;

Node *head=NULL;


int main()
{
    AddItem();
    AddItem();
    AddItem();
    DisplayList();
    DeleteItem(23);
    DisplayList();
    DeleteItem(0);
    DisplayList();
 
    return 0;
}

void AddItem(){
    Node *tmp=NULL;
    tmp = (Node *)malloc(sizeof(Node));
    printf("In Add item function, so enter the adding item details\n");
    scanf("%d",&tmp->data);
    tmp->next=NULL;

    if(head==NULL){
        head=tmp;
    }
    else{
        Node *p;
        p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=tmp;
    }
}

void DisplayList(){
    if(head==NULL){
        printf("List is EMpty\n");
    }
    else{
        Node *p;
        p=head;
        while(p!=NULL){
            printf("%d--> ", p->data);
            p=p->next;
        }
        printf("\n");
    }
}

void DeleteItem(int i){
    int found =0;
    if(head==NULL){
        printf("List is EMpty\n");
    }
    else if(head->data==i){
        Node *tmp=head;
        head=tmp->next;
        tmp->next=NULL;
        free(tmp);
    }
    else{
        Node *p=head->next;
        Node *prev=head->next;
        while(p!=NULL){
            if(p->data==i){
                found=1;
                Node *tmp=prev->next;
                prev->next=tmp->next;
                tmp->next=NULL;
                free(tmp);
                break;
            }
            prev=p;
            p=p->next;
        }
        if (found==0){
        printf("List do not have the given element\n");
        }
    }
    
    
}