#include <stdio.h>

int binary_search_with_less_comp(int a[], int l, int r, int key) {
    printf("Searching for %d\n",key);

    int m = 0;
    while(r-l > 1) {
        m = l+(r-l)/2;
        if(key < a[m]) r = m;
        else l = m;
    }
    if(key == a[l]) return l;
    return -1;
}

int binary_search_for_floor(int a[], int l, int r, int key) {

    int m = 0;
    while(r-l > 1) {
        m = l+(r-l)/2;
        if(key > a[m]) l = m;
        else r = m;
    }
    return a[l];
}

int binary_search(int a[], int l, int r, int key) {
    printf("Searching for %d\n",key);

    int m = 0;
    while(l <= r) {
        m = l+(r-l)/2;
        if(key == a[m]) return m;
        if(key < a[m]) r = m-1;
        else l = m+1;
    }
    return -1;
}
int main(int argc, char *argv[]) {
    int a[] ={0,3,4,5,7,9};
    printf("BS      : %d\n", binary_search(a,0,6,atoi(argv[1])));
    printf("BS LC   : %d\n", binary_search_with_less_comp(a,0,6,atoi(argv[1])));
    printf("BS Floor: %d\n", binary_search_for_floor(a,0,6,atoi(argv[1])));
}
