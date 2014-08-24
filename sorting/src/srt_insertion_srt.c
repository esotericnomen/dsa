#include "srt_insertion_sort.h"

void srt_insertion_sort(int *array, int size) {
	int i = 0,
	    j = 0,
		tmp = 0;

		for(i = 1; i < size; i++) {
			j = i-1;
			tmp = array[i];
			while((tmp < array[j]) && j >=0) {
				array[j+1]=array[j];
				j--;
			}
			array[j+1]=tmp;
		}
}
