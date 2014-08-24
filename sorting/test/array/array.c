#include <stdio.h>
#include <stdlib.h>
int create_array(int **arr, int size) {
    int i = 0;

    *arr = (int *) malloc(sizeof(int) * size);
    for (i = 0; i < size; i++) {
        *((*arr)+i)=rand()%127;
    }
}

int print_array(int *arr, int size) {
    int i = 0;

    printf("Array is : \n");
    for(i = 0; i< size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
