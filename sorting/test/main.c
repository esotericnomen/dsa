/*
*   Program to learn various sorting algorithms
*   Change Log :
*       Version: 0.0.1
*   
*/
#include "srt.h"
#include "srt_insertion_sort.h"
#include "srt_selection_sort.h"
#include "srt_bubble_sort.h"
#include "srt_support.h"
int main()
{
	int option = 0,
		size = 0;
	int *array = NULL;
	/*int array[64];*/

	printf("Program to learn sorting\n");
	print_menu();
	option = get_choice();

	while(1) {
	switch(option) {
		case 0 : {
			exit(0);
		}
		case 1: {
			printf("Initalize the array\n");
			srt_init_array(&array,&size);
			break;
		}
		case 2: {
			printf("Print the array\n");
			srt_print_array(array, size);
			break;
		}
		case 3: {
			printf("Insertion sort\n");
			srt_insertion_sort(array,size);
			break;
		}
		case 4: {
			printf("Bubble sort\n");
			srt_bubble_sort(array,size);
			break;
		}
		case 5: {
			printf("Selection sort\n");
			srt_selection_sort(array,size);
			break;
		}
		default: {
			printf("Invalid option %d\n",option);
		}
	}
	print_menu();
	option = get_choice();

	}
}
