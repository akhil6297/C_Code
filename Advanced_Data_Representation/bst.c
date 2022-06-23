#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node Node;

Node *head=NULL;

int main(){

    AddItem();
    AddItem();
    AddItem();
    AddItem();
    AddItem();
    Inorder_display(head);


    return 0;
}



void AddItem(){
    Node *tmp;
    tmp=(Node *)malloc(sizeof(int));
    printf("Enter the data value of node to be added\n");
    scanf("%d", &tmp->data);
    tmp->left=NULL;
    tmp->right=NULL;

    if(head==NULL){
        head=tmp;
    }
    else{
        Node *curr,*p;
        curr=head;
        while (curr)
        {
            p=curr;
            if(curr->data > tmp->data){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
        if(p->data > tmp->data){
            p->left=tmp;
        }
        else{
            p->right=tmp;
        }
        
    }
}

void Inorder_display(Node *root){
    if(root->left){
        Inorder_display(root->left);
    }
    printf("%d->",root->data);
    if(root->right){
        Inorder_display(root->right);
    }
    // printf("%d->",root->data);

}