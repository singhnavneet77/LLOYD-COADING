#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

void create(struct stack *st) {
    st->arr = (int *)malloc(st->size * sizeof(int));
    st->top = -1;
}

void push(int n, struct stack *st) {
    if (st->top == st->size - 1)
        printf("stack overflow");
    else {
        st->top++;
        st->arr[st->top] = n;
    }
}

int pop(struct stack *st) {
    int x;
    if (st->top == -1) {
        printf("stack underflow");
        return -1; // Added return value for underflow
    } else {
        x = st->arr[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack *st) {
    if (st->top == -1)
        return -1;
    else
        return st->arr[st->top];
}

int size(struct stack *st) {
    return st->top + 1;
}

int isempty(struct stack *st) {
    return st->top == -1;
}

int isfull(struct stack *st) {
    return st->top == st->size - 1;
}

void insertbuttom(struct stack *st, int temp) {
    if (isempty(st))
        push(temp, st);
    else {
        int data = pop(st);
        insertbuttom(st, temp);
        push(data, st);
    }
}

void recursion(struct stack *st) {
    if (isempty(st))
        return;
    else {
        int temp = pop(st);
        recursion(st);
        insertbuttom(st, temp);
    }
}

void display(struct stack *st) {
    for (int i = st->top; i >= 0; i--)
        printf("%d ", st->arr[i]);
    printf("\n");
}

int main() {
    struct stack st;
    printf("Enter the size:");
    scanf("%d", &st.size);
    create(&st);
    push(10, &st);
    push(20, &st);
    push(30, &st);
    push(40, &st);
    display(&st);
    recursion(&st);
    display(&st);
    free(st.arr);
    return 0;
}
