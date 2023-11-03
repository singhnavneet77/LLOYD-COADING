#include<stdio.h>
#include<stdlib.h>
struct element{
  int r;
  int c;
  int value;
}e;
struct sparse{
  int m;
  int n;
  int nonzero;
  struct element *e;
} s;
void display(struct sparse s);
void create( struct sparse *s){
printf("Enter no of row");
scanf("%d",&s->m);
printf("Enter no of column");
scanf("%d",&s->n );
printf("Enter no of non zero elements");
scanf("%d",&s->nonzero);
 s->e=(struct element *)malloc(s->nonzero*sizeof(struct element));
 printf("Enter non zero elements");
 for(int i=0;i<s->nonzero;i++){
   scanf("%d%d%d",&s->e[i].r,&s->e[i].c,&s->e[i].value);
 }
}
void display(struct sparse s){
  int i,j,k=0;
  for(i=0;i<s.m;i++){
    for(j=0;j<s.n;j++){
      if(i==s.e[k].r&&j==s.e[k].c)
      printf("%d ",s.e[k++].value);
      else
      printf("0 ");
    }
    printf("\n");
  }
}
void main(){
  create(&s);
  display(s);
}
