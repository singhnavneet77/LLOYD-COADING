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

void deletion(struct node *p,int index){
    int c=count(head);
    if(index<0||index>c)
    return ;
    else if(index==1){
    head=head->next;
    head->prev=NULL;
    p->next=NULL;
    free(p);
    }
    else if(index==c){
     while(p->next!=NULL){
        p=p->next;
    }
    p->prev->next=NULL;
    p->prev=NULL;
    free(p);
    }
    else{
    for(int i=0;i<index;i++){
    p=p->next;
    }
    p->prev->next=p->next;
    p->next->prev=p->prev;
    free(p);
    }
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
    display(head);
    printf("\n");
    printf("Enter the index which you want to delete:");
    scanf("%d",&index);
    deletion(head,index);
    display(head);
    printf("\n");
}
 
