#include <stdio.h>
#include<stdlib.h>

int maxi(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

void countsort(int arr[],int n){
    int k=maxi(arr,n);
    int count[k+1];
    for(int i=0;i<=k;i++){
        count[i]=0;
    }
    for(int j=0;j<n;j++){//Frequency array.
        count[arr[j]]++;
    }
    for(int i=1;i<=k;i++){ //Cumulative frequency.
        count[i]=count[i]+count[i-1];
    }
    int out[n];//Calculation
    for(int i=n-1;i>=0;i--){
        out[--count[arr[i]]]=arr[i];
    }
    display(out,n);
}

void display(int arr[], int n){
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    countsort(arr,n);
    return 0;
}
