#include <stdio.h>
int main() {
    int *arr = NULL,
        size = 16;

    create_array(&arr, size);
    print_array(arr, size);

    quicksort(arr, 0, size-1);
    print_array(arr, size);

}
