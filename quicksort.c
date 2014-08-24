#include<stdio.h>
void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }
void printArray(int *arr,int nmem) {
    int i; for(i = 0; i < nmem;i++) printf("%d ",arr[i]); printf("\n");
}

void merge(int a[],int l, int m, int r) {
    int l1 = m - l+1;
    int l2 = r - m;
    int i = 0, j = 0, k = 0;

    int a1[l1], a2[l2];

    for(i=0; i < l1; i++) a1[i] = a[l+i];
    for(i=0; i < l2; i++) a2[i] = a[m+1+i];

    i = 0; j = 0; k =0;
    while( (i < l1) && (j < l2) ) {
        if(a1[i] <= a2[j]) a[k++] = a1[i++];
        else a[k++] = a2[j++];
    }
    while(i<l1) a[k++] = a1[i++];
    while(j<l2) a[k++] = a2[j++];
}
void merge_sort(int a[], int l,int r) {
    if(l < r) {
        int m = l+(r-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int rpartition(int* arr, int start, int end)
{
    int pIndex = start;
    int i = 0;
    int random= start + rand() % (end - start + 1);
    int pivot = arr[random];

    swap(&arr[random], &arr[end]); // swap random pivot to end.

    for(i=start; i<end;i++) {
        if(arr[i] <= pivot) {
            swap(&arr[pIndex], &arr[i]);
            pIndex++;
        }
    }
    swap(&arr[pIndex], &arr[end]); // place the pivot to right place

    return pIndex;
}

int partition(int arr[], int start, int end) {
    int pIndex = start;
    int i = 0;
    int pivot = arr[end];

    for(i=start;i<end;i++) {
        if(arr[i] <= pivot) {
            swap(&arr[i],&arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[end],&arr[pIndex]);
    return pIndex++;
}

void quickSort(int arr[], int start, int end)
{
    if(start < end) {
        /*int pIndex = partition(arr,start, end);*/
        int pIndex = rpartition(arr,start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

int main()
{
    const int N = 25;
    int arr[N];
    int i = 0;
    for (i=0; i<N; ++i)
        arr[i]=rand() % (2*N) + 1;
    printArray(arr, N);
    //quickSort(arr, 0, N-1);
    merge_sort(arr, 0, N-1);
    printf("Sorted array: \n");
    printArray(arr, N);
    return 0;
}
