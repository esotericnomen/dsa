#include <stdio.h>
int main() {
    int *arr = NULL,
        size = 10;

    create_array(&arr, size);
    print_array(arr, size);

    partition(arr, 0, size-1);
    print_array(arr, size);

}
