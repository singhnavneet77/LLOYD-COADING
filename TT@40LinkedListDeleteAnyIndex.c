#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void display(struct node *p);
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
void deletion(struct node *p,int index,int value){
    int c=count(head);
    if(index<0||index>c)
     return ;
    else if(index==1){
    head=head->next;
    free(p);
}

    else if(index==c){
     struct node *q;
    q=(struct node*)malloc(sizeof(struct node));
    while(p->next!=NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    free(p);
    }

else{
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
}

void display(struct node *p){
   while(p!=NULL){
   printf("%d  ",p->data);
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
    deletion(head,index,value);
    display(head);
    printf("\n");
}
