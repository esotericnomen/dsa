#include "linked_list.h"
#include "lnklst_support.h"
#include "linked_delete.h"

int delete_node(Node **head) {
    char tmp_str[64];
    Node *tmp = *head;
    Node *prev = *head;

    printf("Inside delete\n");

    if(NULL == tmp) {
        printf("Nothing to delete\n");
        return -1;
    }

    print_list(tmp);
    printf("Enter the key value to delete : ");
    scanf("%s",tmp_str);

    if(!(strcmp(tmp_str, tmp->str))) {
        printf("Head to delete\n");
        tmp = tmp->next;
        free(prev->str);
        free(prev);
        *head = tmp;

        return 0;
    }

    tmp = tmp->next;

    while( (NULL != tmp) && strcmp(tmp_str,tmp->str)) {
        prev = tmp;
        tmp = tmp->next;
    }
    if( (NULL != tmp) && !(strcmp(tmp_str, tmp->str))) {
        prev->next = tmp->next;
        free(tmp->str);
        free(tmp);
        return 0;
    }
    printf("Nothing to delete\n");
    return -1;
}
