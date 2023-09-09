#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n,x;
  int *p;
   printf("Enter the size:");
   scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));
    printf("Enter element of P:");
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
  int *q;
  printf("ENter the modify size of p : ");
  scanf("%d",&x);
  q=(int *)malloc(x*sizeof(int));
  printf("Enter extra element of Q:\n");
    for(i=n;i<x;i++){
      scanf("%d",&q[i]);}
      for(i=0;i<n;i++){
        q[i]=p[i];
      }
      p=q;
  for(i=0;i<n;i++){
    p[i]=q[i];
  }
  for(i=0;i<x;i++){
  printf("%d\t",q[i]);}
  free(p);
  q=NULL;
  free(q);
  return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
void Pvalue(int n);
void Qvalue(int n);
int display(int n,int p,int q);
int main(){
  int n;
  printf("Enter the size:");
  scanf("%d",&n);
  Pvalue(n);
  Qvalue(n);
}
 void Pvalue(int n){
  int *p;
  int i;
  p=(int *)malloc(n*sizeof(int));
    printf("Enter element of P:\n");
    for(i=0;i<n;i++){
    scanf("%d",&p[i]);
  }
  }
void Qvalue(int n){
  int *q;
  int i,x;
  printf("ENter the modify size of p : \n");
  scanf("%d",&x);
  q=(int *)malloc(x*sizeof(int));
  printf("Enter extra element of Q:\n");
    for(i=n;i<x;i++){
      scanf("%d",&q[i]);}
      for(i=0;i<n;i++){
        q[i]=p[i];
      }
      p=q;
  for(i=0;i<n;i++){
    p[i]=q[i];
  }
}
int display(int n,int p,int q){
  int i,x;
  for(i=0;i<x;i++){
  printf("%d\t",q[i]);}
  free(p);
  q=NULL;
  free(q);
  return 0;
}*/
