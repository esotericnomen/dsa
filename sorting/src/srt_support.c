#include "srt_support.h"

void print_menu(void) {
	printf("Operations available are\n");
	printf("\t0) Exit\n");
	printf("\t1) Init array\n");
	printf("\t2) Print array\n");
	printf("\t3) Insertion sort\n");
	printf("\t4) Bubble sort\n");
	printf("\t4) Selection sort\n");
}
int get_choice(void) {
	int option = 0;
	printf("Enter your option\n");
	scanf("%d",&option);
	return option;
}

void srt_init_array(int **array_tmp, int *size) {
	int i = 0;
	int tmp = 0;
	int *array = *array_tmp;
	printf("Enter the number of elements\n");
	scanf("%d",&tmp);
	printf("Size is %d\n",tmp);

	array = (int *)malloc(tmp * sizeof(int));

	for(i=0;i<tmp;i++) {
		*(array+i) = rand()%100;
	}
	*size = tmp;
	*array_tmp = array;
}

void srt_print_array(int *array, int size) {
	int i = 0;
	for(i = 0; i<size;i++) {
		printf("%d ",*(array+i));
	}
	printf("\n");
}
