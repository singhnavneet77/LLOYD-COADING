/*#include<stdio.h>
int main(){
  char n;
  printf("Enter a roman number:");
  scanf("%d",&n);
  switch(n){
    case 'I':
    return 1;
    break;
    case 'V':
    return 5;
    case 'X':
    return 10;
    break;
    case 'L':
    return 50;
    case 'C':
    return 100;
    break;
    case 'D':
    return 500;
    break;
    case 'M':
    return 1000;
    default:
    return -1;
  }
  printf("number is %d",n);
}*/
/*#include<stdio.h>
int main(){
  int arr[5]={4,5,7,8,6};
  printf("%d",*(arr+2));
  return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int  main(){
  int *p;
  int n,i;
  p=(int*)malloc(5*sizeof(int));
  for(i=1;i<=10;i++){
    scanf("%d",&p[i]);
  }
  for(i=1;i<=10;i++){
  printf("%d\t",p[i]);
}
free(p);
}*/
/*#include<stdio.h>
#include<stdlib.h>//In leetcode 189.
int main(){
  int n,i,d,arr[10],new[10],j,k,t;
  int *p;
  printf("Enter the size:");
  scanf("%d",&n);
  p=(int *)malloc(5*sizeof(int));
  printf("Enter array element:");
  for(i=0;i<n;i++){
    scanf("%d",&p[i]);
  }
  printf("Enter D position:");
  scanf("%d",&d);
  for(i=d,k=0;i<n;i++,k++){
    arr[k]=p[i];
  }
  for(j=0,t=k;j<d;j++,t++){
  arr[t]=p[j];
  }
  for(i=0;i<n;i++){
    printf("%d",arr[i]);
  }
}*/
#include<stdio.h>
#include<stdlib.h>//In leetcode 189.
int main(){
  int n,i,d,arr[10],r;
  int *p;
  printf("Enter the size:");
  scanf("%d",&n);
  p=(int *)malloc(5*sizeof(int));
  printf("Enter array element:");
  for(i=0;i<n;i++){
    scanf("%d",&p[i]);
  }
  printf("Enter D position:");
  scanf("%d",&d);
  for(i=0;i<d;i++){
  r=n%d;
  n=n/10;
}

}
