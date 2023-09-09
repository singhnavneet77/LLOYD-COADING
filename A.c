#include<stdio.h>
int desp(int arr[],int n);
void del(int arr[],int n);
void insert(int arr[],int n);
int main(){
int n,p,i,n1;
/*printf("Enter your choice:");
scanf("%d",&n1);
switch(n1){
  case 1:
  printf("1.Insertoin.\n");
  break;
  case 2:
  printf("2.Deletion.\n");
  break;
  case 3:
  printf("3.Exit.");
}*/
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter array element:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
insert(arr,n);
 del(arr,n);
}
void insert(int arr[],int n){
  int i,p,e;
  printf("Enter insert position and element:");
  scanf("%d %d",&p,&e);
  for(i=n-1;i>=p-1;i--){
    arr[i+1]=arr[i];
  }arr[p-1]=e;
  n++;
  desp(arr,n);
  }
int desp(int arr[],int n){
  int i;
  printf("The inserted array is\n");
  for(i=0;i<n;i++){
    printf("%d\t",arr[i]);

  }
  return 0;
}
void del(int arr[],int n){
  int p,l,f,i;
  printf("\nEnter deleation first and last position:");
  scanf("%d %d",&f,&l);
  p=l-f;
  n=n-p;
  for(i=p;i<=n;i++){
    arr[f]=arr[l+1];
  }
  printf("The deleted array is\n");
  for(i=0;i<n;i++){
    printf("%d",arr[i]);
  }
}
