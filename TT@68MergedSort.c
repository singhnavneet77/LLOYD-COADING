#include<stdio.h>
void merge(int arr[],int l,int mid,int h){
    int i, j, k;
    int n1 = mid- l + 1;
    int n2 =  h - mid;
    int a[n1], b[n2];
    for (i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        b[j] = arr[mid+1+j];
    i = 0,j=0,k=l;
    while (i < n1 && j < n2){
        if (a[i] <= b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while (i < n1){
        arr[k++] = a[i++];
    }
    while (j < n2){
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int h){
    if (l < h){
        int mid = l+(h-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l, mid, h);
}
}

void display(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    // printf("\n");
}

int main(){
    int arr[] = {9,6,4,2,11,7,9,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Given array is \n");
    display(arr, size);
    mergeSort(arr, 0, size - 1);
    printf("\nSorted array is \n");
    display(arr, size);
    return 0;
}
