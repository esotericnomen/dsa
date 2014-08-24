#include "linked_list.h"
#include "lnklst_support.h"
#include "linked_delete.h"

int delete_node(Node **head) {
	int value = 0;
	Node *tmp = *head;
	Node *prev = *head;

	printf("Inside delete\n");

	if(NULL == tmp) {
		printf("Nothing to delete\n");
		return -1;
	}

	print_list(tmp);
	printf("Enter the key value to delete : ");
	scanf("%d",&value);

	if(value == tmp->val) {
		printf("Head to delete\n");
		tmp = tmp->next;
		free(prev);
		*head = tmp;

		return 0;
	}

	tmp = tmp->next;

	while( (NULL != tmp) && value != tmp->val) {
		prev = tmp;
		tmp = tmp->next;	
	}
	if( (NULL != tmp) && (value == tmp->val)) {
		prev->next = tmp->next;
		free(tmp);
		return 0;
	}
	printf("Nothing to delete\n");
	return -1;
}
