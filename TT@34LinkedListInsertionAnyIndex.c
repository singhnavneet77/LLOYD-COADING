// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// }*head=NULL;
// void display(struct node *p);
// int count(struct node*p);

// void create(int a[],int n){
//     struct node *temp,*last;
//     head=(struct node*)malloc(sizeof(struct node));
//     head->data=a[0];
//     head->next=NULL;
//     last = head;
// for(int i=1;i<n;i++){
//     temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=a[i];
//     temp->next=NULL;
//     last->next=temp;
//     last=temp;
// }
// }
// void insertion(struct node *p,int index,int value){
//     int c=count(head);
//     if(index<0||index>c)
//     //if you written struct then printf Invalid and return head.
//     return ;
//     if(index==0){
//      struct node *temp;
//      temp=(struct node *)malloc(sizeof(struct node));
//      temp->data=value;
//      temp->next=p;
//      head=temp;
//      //if you written struct then return head.
//     }
//     if(index==c){
//     struct node *temp;
//     temp=(struct node *)malloc(sizeof(struct node)); 
//     temp->data=value;
//     temp->next=NULL;
//     while(p->next=NULL){
//         p=p->next;
//     }
//     p->next=temp;
//     //if you return struct return head. 
//     }
//     if(index>0&&index<c){
//     struct node *temp,*q;
//     temp=(struct node *)malloc(sizeof(struct node *));
//     temp->data=value;
//     temp->next=NULL;
//     q=(struct node *)malloc(sizeof(struct node *));
//     q=NULL;

//     for(int i=0;i<index;i++){
//         q=p;
//         p=p->next;
//     }
//     temp->next=q->next;//p.
//     q->next=temp;
//     // return head; if you written struct. 
// }
// }

// void main(){
//     int a[]={19,23,45,67,89,90};
//     create(a,6);
//     display(head);
//     printf("\n");
//     insertion(head,3,5500);
//     display(head);
    
//     // int c=count(head);
//     // printf("Number of elemnt is : %d",c);
// }

// void display(struct node *p){
//    while(p!=NULL){
//    printf("%d  ",p->data);
//    p=p->next;
//     }
// }

// int count(struct node*p){
//     int c=0;
//     while(p!=NULL){
//     c++;
//     p=p->next;
//     }
//     return c;
// }


//Second using struct data type.
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void display(struct node *p);
int count(struct node*p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }return c;
}
struct node *givenindex(struct node *p,int index ,int data){
    int c=count(p);
    if(index<0||index>c){
        printf("\n not possible\n");
        return head;
        
    }
if(index==0){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=data;
    temp->next=p;
    head=temp;
    return head;
}
if(index==count){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    
    temp->data=data;
    temp->next=NULL;
    while(p->next!=NULL){
    p=p->next;
    }
    p->next=temp;
    return head;
}
if(index>0&&index<count){
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=data;
    temp->next=NULL;
    q=(struct node *)malloc(sizeof(struct node *));
    q=NULL;

for(int i=0;i<index;i++){
    q=p;
    p=p->next;
  }
    temp->next=q->next;//p.
    q->next=temp;
    return head;
 }
}

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
void display(struct node *p){
    while(p!=NULL){
    printf("%d  ",p->data);
    p=p->next;
  }
}

void main(){
    int a[]={19,23,45,67,89,90};
    create(a,6);
    display(head);
    printf("\n");
    head = givenindex(head,5,1500);
    display(head);
    free(head);
    head = NULL;
}