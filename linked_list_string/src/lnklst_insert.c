#include "linked_list.h"
#include "linked_insert.h"
#define HARDCODE

#ifdef HARDCODE
char init[10][64] = {
    "Henrietta Mathieu",
    "Aja Mello",
    "Cornelia Dardar",
    "Tori Astorga",
    "Nathalie Luk",
    "Yung Wyble",
    "Cinderella Markow",
    "Tawny Hugley",
    "Richelle Gilpin",
    "Yuette Daw"
};
#endif

Node *get_new_node(void) {
    char tmp_str[64];
    int len = 0;
    static int i = 0;

    Node *new_node = malloc(sizeof(Node));

#ifndef HARDCODE
    LS_LOG("Enter the string to insert: ");
    scanf("%s",tmp_str);
#else
    strcpy(tmp_str,init[i]);
    i++;
#endif

    len = strlen(tmp_str);

    new_node->str = (char *)malloc(len);

    strcpy(new_node->str, tmp_str);

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
