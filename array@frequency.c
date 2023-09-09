#include<stdio.h>
void main(){
  int n,count,i;
  int arr[] = {7,5,8,7,6,7,8,7};
  printf("Enter the search element : ");
  scanf("%d",&n);
  count=0;
  for(i=0;i<8;i++){
    if(arr[i]==n){
      count++;
    }
  }
  printf("The number is %d found in array %d time/times. ",n,count);
}
