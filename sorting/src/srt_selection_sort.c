#include "srt_selection_sort.h"

void srt_selection_sort(int *array, int size) {
	int i = 0,
	j = 0,
	tmp = 0;

	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(array[i]>array[j]){
				tmp=array[i];
				array[i]=array[j];
				array[j]=tmp;
			}
		}
	}
}
