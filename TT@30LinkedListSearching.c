#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
int search(struct node*,int key);
void display(struct node *p);
int  Rsearch(struct node*p,int key);

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
// free(last);
// last=NULL;
}

int search(struct node *p,int key){
  if(p==NULL)
  return 0;
  while(p!=NULL){
  if(p->data==key){
  printf("Found");
  return 1;
  }
  p=p->next;
  }
  return 0;
}

void main(){
    int t=0;
    int a[]={19,23,45,67,89,90};
    create(a,6);
    display(head);
    printf("\n");
    t=search(head,67);
    if(t==0)
    printf("Not found\n" );
    else
    printf("Found\n");
    t=Rsearch(head,67);
    if(t==0)
    printf("Not found\n");
    else
    printf("Found\n");
    free(head);
    head=NULL;
}

void display(struct node *p){
   while(p!=NULL){
   printf("%d  ",p->data);
   p=p->next;
    }
}

int Rsearch(struct node *p,int key){
  if(p!=NULL){
    if(key==p->data){
      printf("FOUND");
return 1;
    }
    return Rsearch(p->next,key);
  }
  return 0;
}
