#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void create(int arr[],int n){
  struct node *temp,*last;
  head=(struct node*)malloc(sizeof(struct node*));
  head->data=arr[0];
  head->next=NULL;
  last=head;
for(int i=1;i<n;i++){
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=arr[i];
 temp->next=NULL;
 last->next=temp;
 last=temp;
}
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void sorting(struct node *p,int value){
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=value;
    temp->next=NULL;
    q=(struct node*)malloc(sizeof(struct node*));
    q=NULL;
if(p==NULL){
    head=temp;
}
else if(p==head&&p->data>value){
    temp->next=head;
    head=temp;
}
else{
    while(p!=NULL && p->data<value){
    q=p;
    p=p->next;
 }
    temp->next=q->next;
    q->next=temp;

}
}
int main(){
    int n,value,index;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    create(arr,n);
    display(head);
    printf("\n");
    printf("Enter value to insert:");
    scanf("%d",&value);
    sorting(head,value);
    display(head);
    printf("\n");
}
