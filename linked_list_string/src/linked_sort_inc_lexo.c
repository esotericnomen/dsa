#include "linked_list.h"
#include "linked_sort_inc_lexo.h"

Node *sort_inc_lexo(Node *head) {

    Node *curr = NULL;
    Node *next = NULL;
    Node *prev = NULL;
    Node *tmp = NULL;
    Node *new_head = NULL;
    Node *min_node = NULL;

    int i=0,
        count = 0;

    printf("\n\n\n\n\n\n");
    if(head)
        curr=head;
    else {
        printf("Nothing to sort. head is Null\n");
        return curr;
    }
    if(NULL == head->next) {
        printf("Nothing to sort. Only one element\n");
        return head;
    }

    tmp = curr;
    while(NULL != tmp) {
        tmp = tmp->next;
            count++;
    }
    /*printf("total count  = %d\n",count);*/

    tmp = curr;

    next = curr->next;
    for(i = 0;i < count; i++) {
        /*printf("Iteration %d Head : %s\n",i,head->str);*/
        next = head->next;
        curr = head;
        prev = NULL;
        print_list(head);
        while((next != NULL)) {
            int min;
            min = str_min(curr->str, next->str);

            printf("min is %d %s : %s\n",min,curr->str, next->str);

            if(min) {
                printf("Exchange\n");
                printf("Current : %s\n",curr->str);
                printf("Next : %s\n",next->str);
                printf("Head : %s\n",head->str);
                if(prev != NULL)
                    printf("Prev : %s\n",prev->str);

                curr->next = next->next;
                next->next = curr;
                if(prev != NULL)
                    prev -> next = next;
                if(curr == head) {
                    head = next;
                    printf("Exge in head.Current head is %s\n",head->str);
                }
            }
            else {
                printf("No need for change\n");
                /*curr = next;*/
                /*next = curr -> next;*/
            }
            printf("After it : ");
            print_list(head);

            prev = curr;
            curr=next;
            next=curr->next;
            printf("\n\n\n");
        }
    }
    /*print_list(head);*/
    return head;
}

int str_min(char *str1, char *str2){
    int min = 0;
    int len = 0,
        i = 0;
    /*printf("Compare\n");*/
    /*printf("Str1 : %s\nstr2 : %s\n",str1,str2);*/
    if((str1 == NULL) || (str2 == NULL)) {
        /*printf("String is null\n");*/
        return -1;
    }

    len = strlen(str1);
    if( len > strlen(str2)) {
        len = strlen(str2);
        min = 1;
    }

    /*printf("Min lenght is %d\n",len);*/

    for(i = 0;i < len; i++) {
        if(str1[i] == str2[i]) {
            /*printf("Char %d is same \n",i+1);*/
            continue;
        }
        else {
            if(str1[i]< str2[i])
                min = 0;
            else
                min = 1;
            /*printf("Min string is %s \n",min);*/
            break;
        }
    }
    fflush(stdout);
    return min;
}
