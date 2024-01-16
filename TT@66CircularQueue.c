#include<stdio.h>
#include<stdlib.h>
struct queue{
   int size;
   int front;
   int rear;
   int *arr;

};

int create(struct queue *q,int size){
    q->front=q->rear=-1;
    q->size=size;
    q->arr=(int*)malloc(q->size*(sizeof(int)));
}

int isempty(struct queue* q){
  if(q->front == q->rear&&(q->rear%q->size)==q->front)
  return 1;
  else return 0;
}

int isFull(struct queue *q){
    if(q->rear == q->size-1 && q ->rear == (q->rear+1 % q->size)){
        return 1;
    }
   return 0;
}

int getrear(struct queue* q){
  return q->arr[q->rear];
}

int getfront(struct queue* q){
  return q->arr[q->front];
}

void enqueue(struct queue *q, int data){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear] = data;
        // printf("Enqued element: %d\n",data);
  }
}

int dequeue(struct queue *q){
    int x=-1;
    if(q->front == -1)
    {
   printf("empty");
    }
    else
       { q->front=(q->front+1)%q->size;
        x=q->arr[q->front];}
    return x;
}

void display(struct queue *q){
    while(q->front!=q->rear){
        q->front++;
        printf("%d ",q->arr[q->front]);
    }
}

int main(){
     struct queue q;
     int size, d;
     scanf("%d",&size);
     create(&q,size);
    //  display(&q);
     enqueue(&q,10);
     enqueue(&q,20);
     enqueue(&q,30);
     enqueue(&q,40);
     enqueue(&q,50);
     display(&q);
     d = dequeue(&q);
     printf("\nDequeue : %d \n", d);
     display(&q);
}
