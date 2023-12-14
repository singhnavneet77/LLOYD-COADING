#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head1=NULL,*head2=NULL;

void create1(int a[],int n){
    struct node *temp,*last;
    head1=(struct node*)malloc(sizeof(struct node));
    head1->data=a[0];
    head1->next=NULL;
    last = head1;
for(int i=1;i<n;i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
}
}

void create2(int arr[],int n){
    struct node *temp,*last;
    head2=(struct node*)malloc(sizeof(struct node));
    head2->data=arr[0];
    head2->next=NULL;
    last = head2;
for(int i=1;i<n;i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=arr[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
}
}

void concatenation(struct node *p,struct node *q){
  while(p->next!=NULL){
      p=p->next;
  }
  p->next=q;
  head2=NULL;
}

void display(struct node *p){
   while(p!=NULL){
   printf("%d  ",p->data);
   p=p->next;
    }
}

void main(){
    int a[]={19,23,45,67,89,90};
    create1(a,6);
    display(head1);
    printf("\n");
    int arr[]={10,20,30,40,50,90};
    create2(arr,6);
    display(head2);
    printf("\n");
    concatenation(head1,head2);
    display(head1);
    printf("\n");
}
