#include<stdio.h>
int fibo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibo(n-2)+fibo(n-1);
}
void main(){
    int n,i,c;
    printf("Enter the term : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=fibo(i);
        printf("%d\t",c);
    }
}
