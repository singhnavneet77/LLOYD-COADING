#include<stdio.h>
int main(){
    int m,n,k=0;
    int c[50];
    int i,j;
    printf("Enter the size of first element:");
    scanf("%d",&m);
    int a[m];
    printf("Enter the first array element:");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second element:");
    scanf("%d",&n);
    int b[n];
    printf("Enter the second array element:");
    for(j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    for(i=0,j=0;i<m&&j<n;){
            if(a[i]<b[j]){
            c[k++]=a[i++];
            }
            else{
            c[k++]=b[j++];
            }
        }

    for( ;i<m;i++)
    c[k++]=a[i];
    for( ;j<n;j++)
    c[k++]=b[j];
    printf("The merged  array  is ");
for(i=0;i<m+n;i++){
    printf("%d ",c[i]);
}
return 0;
}
