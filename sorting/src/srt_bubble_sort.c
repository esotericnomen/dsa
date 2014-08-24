#include "srt_bubble_sort.h"

void srt_bubble_sort(int *array, int size) {
	int i = 0,
	    j = 0,
		tmp = 0;

	for(i = 0; i < size-1; i++) {
		for(j=0;j<size - i - 1;j++) {
			if(array[j+1] < array[j]) {
				tmp = array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
}
