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

int Intermediatedelete(struct node *p,int index){
    int i;
    struct node *q;
    q=(struct node*)malloc(sizeof(struct node));
    q=NULL;
    for(i=1;i<index;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    p->next=NULL;
    free(p);
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
    printf("Enter index where you want to delete:");
    scanf("%d",&index);
    Intermediatedelete(head,index);
    display(head);
    printf("\n");
}
