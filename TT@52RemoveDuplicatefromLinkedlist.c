#include<stdio.h>//Reverse of Singly linked list.
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
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

void removeduplicate(struct node *p){
  struct node *q,*temp;
  q=(struct node*)malloc(sizeof(struct node*));
  q=NULL;
  while(p->next!=NULL){
      if(p->data==p->next->data){
        q=p->next->next;
        free(p->next);
        p->next=q;
      }
    else{
        p=p->next;
        }
    }
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){
 int arr[]={2,3,4,5,6};
  create(arr,5);
  display(head);
  printf("\n");
  removeduplicate(head);
  display(head);
  printf("\n");

}
