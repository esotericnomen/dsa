#include "linked_list.h"
#include "linked_search.h"

int search_list(Node *head) {

	int value = 0;

	printf("Enter the element to search for : ");
	scanf("%d",&value);
	while( (NULL != head) && (head->val!=value)) {
		head = head->next;
	}
	if( (NULL != head) && (head->val==value)) {
		LS_LOG("%d is found in the list\n",value);
		return 0;
	}
	LS_LOG("%d is not found in the list\n",value);
	return -1;
}
