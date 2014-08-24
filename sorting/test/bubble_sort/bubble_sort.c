#include <stdio.h>
int bubble_sort(int *arr, int size) {
    int i = 0,
        j = 0,
        temp = 0;

    for(i = 0; i <size;i++) {
        for(j = i; j<size; j++) {
            if(arr[i]>arr[j]) {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}
