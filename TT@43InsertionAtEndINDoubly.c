#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*first=NULL;

void create(int arr[],int n){
  struct node *temp,*last;
  first=(struct node*)malloc(sizeof(struct node*));
  first->data=arr[0];
  first->prev=NULL;
  last=first;
for(int i=1;i<n;i++){
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=arr[i];
 temp->next=NULL;
 temp->prev=last;
 last->next=temp;
 last=temp;
}
}

void insertion(struct node *p,int num){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->prev=NULL; //If you remove your program run.
    temp->next=NULL;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
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

int main(){
    int n,value,index,num;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    create(arr,n);
    display(first);
    printf("\n");
    printf("Enter the number which you want to insert at end:");
    scanf("%d",&num);
    insertion(first,num);
    display(first);
    printf("\n");
    int c=count(first);
    printf("Number of elemnt is : %d",c);
    printf("\n");
}
