#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
}*head=NULL;

void push(int val){
    struct stack *newNode = malloc(sizeof(struct stack));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void pop(){
    struct stack *temp;
    if(head == NULL)
        printf("Stack is Empty\n");
    else{
        printf("Poped element = %d\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}

void display(){
    struct stack *temp = head;
    while(temp != NULL){
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    printf("\n");
    pop();
    display();
    printf("\n");
    pop();
    display();
    return 0;
}
