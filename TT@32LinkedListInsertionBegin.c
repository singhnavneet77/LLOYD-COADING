#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void display(struct node *p);
void create(int a[],int n){
struct node *temp,*last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=NULL;
    last = head;
for(int i=1;i<n;i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
}
}

void display(struct node *p){
    while(p!=NULL){
    printf("%d  ",p->data);
    p=p->next;
    }
}

void insert (struct node *p,int data){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=data;
    temp->next=p;
    head=temp;
}

void main(){
    int a[]={19,23,45,67,89,90};
    create(a,6);
    // display(head);
    insert(head,15);
    display(head);
    free(head);
    head = NULL;
}
