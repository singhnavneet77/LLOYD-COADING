#include<stdio.h>
void main(){
  int i,j,r,c,r1,c1, s[10][10],k;
  printf("Enter the dimenson of first array : ");
  scanf("%d%d",&r,&c);
  int arr1[r][c];
  for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("Enter an element : ");
    scanf("%d",&arr1[i][j]);}}
    printf("Enter the dimenson of second array : ");
    scanf("%d%d",&r1,&c1);
    int arr2[r1][c1];
    for(i=0;i<r1;i++){
      for(j=0;j<c1;j++){
      printf("Enter an element : ");
      scanf("%d",&arr2[i][j]);}}
      printf("The first matrix is\n");
      for(i=0;i<r;i++){
      for(j=0;j<c;j++){
        printf("%d ",arr1[i][j]);
      }
      printf("\n");
    }
      printf("The second matrix is\n");
      for(i=0;i<r;i++){
      for(j=0;j<c;j++){
        printf("%d ",arr2[i][j]);
      }
      printf("\n");}
    printf("The addition of matrix is\n");
     for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      s[i][j]=arr1[i][j]+arr2[i][j];
        printf("%d ",s[i][j]);
    }
    printf("\n");
     }
  }
