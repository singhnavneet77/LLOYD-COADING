#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
    int size;
    int top;
    char *arr;
};

void push(struct stack *st, char data){
    if (st->top==st->size - 1) {
        printf("Stack overflow\n");
    }
    else{
        st->top++;
        st->arr[st->top]=data;
    }
}

char pop(struct stack *st) {
    if (st->top==-1) {
        printf("Stack underflow\n");
        return '\0';
    }
    else {
        char val=st->arr[st->top];
        st->top--;
        return val;
    }
}

void create(struct stack *st,char infix[]) {
    st->size=strlen(infix);
    st->top=-1;
    st->arr=(char*)malloc(sizeof(char)*st->size);
    if (st->top==st->size - 1) {
        printf("Stack overflow\n");
    }

    else{
        st->top++;
        st->arr[st->top]=infix[0];
    }
}

int isoperand(char x){
    return (x =='+'||x=='-'||x=='*'||x=='/')?0:1;
}

int precedence(char x){
    if (x=='+'||x=='-')
        return 1;
    else if (x=='*'||x=='/')
        return 2;
    return 0;
}

void infixtoprefix(char *infix) {
    struct stack st;
    create(&st,infix);
    // int i=1,j=0;
    int len = strlen(infix);
    int i=strlen(infix)-1,j=0;
    char* prefix=(char *)malloc(len*sizeof(char));
    // prefix[j++]=st.arr[st.top];
    while(i>=0){
        if(isoperand(infix[i])){
            prefix[j++]=infix[i--];
        }
        else if(precedence(infix[i])>precedence(st.arr[st.top])) {
            push(&st, infix[i--]);
        }
        else{
            prefix[j++]=pop(&st);
        }
    }
    while(st.top!=-1){
        prefix[j++]=pop(&st);
    }
    prefix[j]='\0';
    // for(int i=0;i<len;i++){
    //     printf("%c ",postfix[i]);
    // }
    for(int i=0;i<j/2;i++){
        char temp=prefix[i];
        prefix[i]=prefix[j-i-1];
        prefix[j-i-1]=temp;
    }
     printf("%s\n ",prefix);
}

int main(){
    char infix[]= "(a+b*c-d/e)";
    infixtoprefix(infix);
    return 0;
}
