#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct queue{
    int front,rear;
    int size;
    int cap;
    int *arr;
};

void create(struct queue *Q ,int cap){
    Q->front =-1;
    Q->rear=-1;
    Q->size=0;
    Q->cap=cap;
    Q->arr=(int*)malloc(sizeof(int)*cap);
}

bool isempty(struct queue *Q){
if(Q->front==Q->rear)
    return true;

    return false;
}

bool  isfull(struct queue *Q){
    if(Q->rear==Q->cap-1)
    return true;

    return false;
}

void enqueue(struct queue *Q,int data){
    if(!isfull(Q)){
        Q->rear++;
        Q->arr[Q->rear]=data;
    }
    else
     printf("Overflow\n");
}

int dequeue(struct queue *Q){
    int x=-1;
    if(isempty(Q)){
    return x;
    }
    else{
        // Q->front++;
        x=Q->arr[Q->front+1];
        Q->front++;
        Q->size--;
    }
    return x;
}

void display(struct queue *Q){
    for(int i=Q->front+1;i<=Q->rear;i++){
        printf("%d ",Q->arr[i]);
    }
}


int  main(){
    int cap;
    struct queue Q;
    printf("Enter size:");
    scanf("%d",&cap);
    create(&Q,cap);
    enqueue(&Q,20);
    enqueue(&Q,10);
    enqueue(&Q,30);
    int y= dequeue(&Q);
    printf("%d\n",y);
    display(&Q);
}
