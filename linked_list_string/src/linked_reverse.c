#include "linked_list.h"
#include "linked_reverse.h"

Node *reverse_list(Node *head) {
    Node *current = head;
    Node *previous = NULL;
    Node *next = NULL;

    while(current) {
        next = current-> next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
