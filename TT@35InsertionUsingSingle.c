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
void insert(struct node *p,int value,int index){
  int c=count(head);
  if(index==0){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->next=p;
  head=temp;
  }

  if(index==c){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->next=NULL;
  while(p->next!=NULL){
     p=p->next;
  }
  p->next=temp;
}
if(index>0&&index<c){
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node*));
 temp->data=value;
 temp->next=NULL;
 for(int i=0;i<index-1;i++){
    p=p->next;
 }
 temp->next=p->next;
 p->next=temp;
}
}
int count(struct node*p){
    int c=0;
    while(p!=NULL){
    c++;
    p=p->next;
    }
    return c;
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
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
    printf("Enter index where you want to insert:");
    scanf("%d",&index);
    printf("Enter value to insert:");
    scanf("%d",&value);
    insert(head,value,index);
    display(head);
    printf("\n");
}
