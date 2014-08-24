#include "linked_list.h"
#include "linked_search.h"

int search_list(Node *head) {

    char str[64];

    printf("Enter the element to search for : ");
    scanf("%s",str);
    while( (NULL != head) && (strcmp(head->str,str))) {
        head = head->next;
    }
    if( (NULL != head) && !(strcmp(head->str, str))) {
        LS_LOG("%s is found in the list\n",str);
        return 0;
    }
    LS_LOG("%s is not found in the list\n",str);
    return -1;
}
