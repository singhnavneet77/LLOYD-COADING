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
int Lastdelete(struct node *p, int value){
    struct node *q;
    q=(struct node*)malloc(sizeof(struct node));
    while(p->next!=NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    free(p);
}

int lastdelete(struct node *p ,int value){
    int x;
    while(p->next!=NULL){
    x=p->next->data;
    p=p->next;
    }
    p->next=NULL;
    free(p->next);
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
    printf("Enter value to delete:");
    scanf("%d",&value);
    Lastdelete(head,value);
    display(head);
    printf("\n");
    lastdelete(head,value);
    display(head);
    printf("\n");

}
