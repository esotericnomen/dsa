#include <stdio.h>
int main() {
    int *arr = NULL,
        size = 16;
    create_array(&arr,size);
    print_array(arr, size);

    bubble_sort(arr, size);
    print_array(arr, size);
}
