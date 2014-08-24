#include "linked_list.h"
#include "linked_insert.h"

Node *get_new_node(void) {
    int val = 0;
    Node *new_node = malloc(sizeof(Node));
    LS_LOG("Enter the value to insert: ");
    scanf("%d",&val);

    new_node -> val = val;
    new_node->next = NULL;

    return new_node;
}
Node *insert_to_list(Node *head) {
    if(head == NULL) {
        head = get_new_node();
    }
	else {
		/*printf("Head is not null\n");*/
		Node *tmp = head;
		while(NULL != tmp->next ) {
			tmp = tmp->next;
		}
		tmp->next = get_new_node();
		return head;
	}
	return head;
}
