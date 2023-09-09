#include<stdio.h>
void main() {
  int i,j,n;
printf("Enter no. of rows : ");
scanf("%d",&n);
int arr[n][n];
for(i=0;i<=n;i++) {
  for(j=0;j<=i;j++) {
    if(j==0)
    { arr[i][j] = 0;
     printf("%d ",arr[i][j]);
   }
    else if(j==1)
    { arr[i][j] = 1;
      printf("%d ",arr[i][j]);
    }
    else
    {arr[i][j] = arr[i-1][j-2]+arr[i-1][j-1];
    printf("%d ",arr[i][j]);
  }
}printf("\n");
}
}
