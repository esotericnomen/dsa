#include "linked_list.h"
#include "linked_print.h"

int print_list(Node *head) {
    printf("The current list is : \n");

    while(NULL != head) {
        LS_LOG("%s -> ",head->str);
        head = head->next;
    }
    LS_LOG("NULL\n");
    return 0;
}
