//Transpose of matrix
#include<stdio.h>
void main(){
  int i,j,r,c;
  printf("Enter the dimenson of array : ");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("Enter an element : ");
    scanf("%d",&arr[i][j]);}}
    printf("The given matrix is\n");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    printf("Transpose of matrix is\n");
      for(i=0;i<c;i++){
      for(j=0;j<r;j++){
        printf("%d ",arr[j][i]);
      }
        printf("\n");
    }
  }
