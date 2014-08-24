#include "linked_list.h"
#include "lnklst_support.h"
#include "linked_delete.h"
#include "linked_print.h"
#include "linked_insert.h"
#include "linked_search.h"
#include "linked_reverse.h"
#include "linked_sort_inc_lexo.h"

int main()
{
    int choice = 0,
        ret = 0,
        i = 0;
    char *min;

    LS_LOG("Program to practice linked list\n");
    print_menu();
    choice = get_choice();
    Node *head = NULL;

    while(choice) {
        switch(choice) {
            case 0:
                {
                    exit(0);
                }
            case 1:
                {
                    LS_LOG("\n---------------------------------------------\n");
                    for(i=0;i<13;i++)
                        head = insert_to_list(head);
                    ret = print_list(head);
                    break;
                }
            case 2:
                {
                    LS_LOG("\n---------------------------------------------\n");
                    LS_LOG("Delete a node\n");
                    if(head != NULL)
                        delete_node(&head);
                    if(NULL != head)
                        printf("Head is at %s\n",head->str);
                    else
                        printf("List is Empty. Cannot delete anything\n");
                    break;
                }
            case 3:
                {
                    LS_LOG("\n---------------------------------------------\n");
                    LS_LOG("View the list\n");
                    ret = print_list(head);
                    break;
                }
            case 4:
                {
                    LS_LOG("\n---------------------------------------------\n");
                    LS_LOG("Search the list\n");
                    ret = search_list(head);
                    break;
                }
            case 5:
                {
                    LS_LOG("\n---------------------------------------------\n");
                    LS_LOG("Reverse the list\n");
                    head = reverse_list(head);
                    ret = print_list(head);
                    break;
                }
            case 6:
                {
                    LS_LOG("\n---------------------------------------------\n");
                    LS_LOG("Sort in increasing lexographic order\n");
                    ret = print_list(head);
                    head = sort_inc_lexo(head);
                    ret = print_list(head);
                    break;
                }
            default: {
                         LS_LOG("Invalid option");
                     }
        }
        print_menu();
        choice = get_choice();
    }

}
