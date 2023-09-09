#include<stdio.h>
void main(){
  int i,j,r,c;
  printf("Enter the size of array : ");
  scanf("%d%d",&r,&c);
  int arr1[r][c];
  printf("Enter an element : ");
  for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    scanf("%d",&arr1[i][j]);}}
    printf("The matrix is\n");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",arr1[i][j]);}
      printf("\n");
    }
  }
