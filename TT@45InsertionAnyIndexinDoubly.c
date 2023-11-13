#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;

void create(int arr[],int n){
  struct node *temp,*last;
  head=(struct node*)malloc(sizeof(struct node*));
  head->data=arr[0];
  head->prev=NULL;
  last=head;
for(int i=1;i<n;i++){
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=arr[i];
 temp->next=NULL;
 temp->prev=last;
 last->next=temp;
 last=temp;
}
}

void IntermediateInsertion(struct node *p,int num,int index){
    int c=count(head);
    if(index<0||index>c)
    return ;
    else if(index==0){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->prev=NULL;
    temp->next=p;
    p->prev=temp;
    head=temp;
    }
    else if(index==c){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    // temp->prev=NULL;
    temp->next=NULL;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
    }
    else{// if(index>0||index<c){
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=num;
    temp->prev=NULL;
   for(int i=0;i<index-1;i++){
    p=p->next;
  }
    temp->next=p->next;
    p->next->prev=temp;
    p->next=temp;
    temp->prev=p;
}
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int count(struct node *p){
    int c=0;
    while(p!=NULL){
    c++;
    p=p->next;
    }
    return c;
}

int main(){
    int n,value,index,num;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    create(arr,n);
    display(head);
    printf("\n");
    printf("Enter the Index where you want to insert:");
    scanf("%d",&index);
    printf("Enter your value:");
    scanf("%d",&num);
    IntermediateInsertion(head,num,index);
    display(head);
    printf("\n");

}
