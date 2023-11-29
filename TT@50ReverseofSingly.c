// #include<stdio.h>//Reverse of Singly linked list.
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// }*head=NULL;
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
//
// void reverse(struct node *curr){
//     struct node *pre,*nextnode;
//     pre = (struct node*)malloc(sizeof(struct node));
//     nextnode = (struct node*)malloc(sizeof(struct node));
//     curr=head;
//     pre=NULL;
//     nextnode=NULL;
//     while(curr!=NULL){
//         pre=nextnode;
//         nextnode=curr;
//         curr=curr->next;
//         nextnode->next=pre;
//     }
//     head=nextnode;
// }
//
// void display(struct node *p){
//     while(p!=NULL){
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }
//
// int main(){
//  int arr[]={2,3,4,5,6};
//   create(arr,5);
//   display(head);
//   printf("\n");
//   reverse(head);
//   display(head);
//   printf("\n");
//
// }


//Resursive method.
// #include<stdio.h>//Reverse of Singly linked list.
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// }*head=NULL;
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
//
// void Rreverse(struct node *q,struct node *p){
//     if(p!=NULL){
//         Rreverse(p,p->next);
//         p->next=q;
//     }
//     else
//     head=q;
// }
//
// void display(struct node *p){
//     while(p!=NULL){
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }
//
// int main(){
//  int arr[]={2,3,4,5,6};
//   create(arr,5);
//   display(head);
//   printf("\n");
//   Rreverse(NULL,head);
//   display(head);
//   printf("\n");
//
// }
