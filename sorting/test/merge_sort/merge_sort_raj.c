#include <stdio.h>
int merge_sort(int *arr, int size) {
    partition(arr, 0, size-1);
}

void partition(int *arr, int low, int high) {

    int middle = 0;
    printf("Inside partition Low : %d High %d\n",low, high);

    if(low<high) {
        middle = (low+high)/2;
        partition(arr, low, middle);
        printf("partition 1 returned\n");
        partition(arr, middle+1, high);
        printf("partition 2 returned\n");
        sort(arr, low, middle, high);
    }
}

void sort(int *arr, int low, int middle, int high) {
    printf("Merging : low %d mid %d high %d\n\n",low, middle, high);
    /*printf("Sorting %d to %d\n",arr+low, arr+high);*/
    int tmp[32],
        l = low,
        m = middle+1,
        i = low;

    while((l <= middle) &&
          (m <= high)) {
        if(arr[l] <= arr[m]) {
            tmp[i] = arr[l];
            l++;
        }
        else {
            tmp[i] = arr[m];
            m++;
        }
        i++;
    }

    if(l > middle) {
        for(;m <= high; m++) {
            tmp[i] = arr[m];
            i++;
        }
    }
    else {
        for(;l<=middle;l++) {
            tmp[i]=arr[l];
            i++;
        }
    }

    for(m = low; m<=high;m++) {
        arr[m]=tmp[m];
    }
}
