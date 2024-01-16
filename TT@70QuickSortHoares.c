#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;

    while (1) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        swap(arr, i, j);
    }
}

void quicksort(int arr[], int l, int h) {
    if (l < h) {
        int p = partition(arr, l, h);
        quicksort(arr, l, p);
        quicksort(arr, p + 1, h);
    }
}

int main() {
    int n, i;

    printf("Enter the size of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
