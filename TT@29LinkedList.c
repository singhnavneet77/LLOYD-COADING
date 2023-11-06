/*#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head = NULL;
    struct node *newnode, *temp;
    char choice;
    do {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    // temp = head;
    // while (temp != NULL) {
    //     struct node *toFree = temp;
    //     temp = temp->next;
    //     free(toFree);
    // }
    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void display(struct node *p);
void Rdisplay(struct node*p);
int count(struct node*p);

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

void main(){
    int a[]={19,23,45,67,89,90};
    create(a,6);
    display(head);
    printf("\n");
    Rdisplay(head);
    printf("\n");
    int c=count(head);
    printf("Number of elemnt is : %d",c);
}

void display(struct node *p){
   while(p!=NULL){
   printf("%d  ",p->data);
   p=p->next;
    }
}

void Rdisplay(struct node*p){
   if(p!=NULL){
   printf("%d  ",p->data);
   return Rdisplay(p->next);
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