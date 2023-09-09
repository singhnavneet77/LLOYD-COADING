/*#include<stdio.h>
int main(){
  int r,c,i,j;
  printf("Enter the diamension of array:");
  scanf("%d %d",&r,&c);
  int arr[r][c];
  printf("Enter matrix element:");
  for(i=0;i<r;i++){
  for(j=0;j<c;j++) {
  scanf("%d",&arr[i][j]);
  }
  }
  for(i=0;i<r;i++){
  for(j=0;j<c;j++) {
  printf(" %d",arr[i][j]);
  }
  printf("\n");
  }
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j;
  int *p[3];
  for(i=0;i<3;i++){
  p[i]=(int)malloc(4*sizeof(int));
  printf("Enter matrix element:")
}
for(i=0;i<3;i++){
for(j=0;j<4;j++){
scanf("%d",&p[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<4;j++){
printf(" %d",p[i][j]);}
printf("\n");
}
}
