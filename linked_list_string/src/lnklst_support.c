#include "linked_list.h"
void print_menu(void) {
    LS_LOG("\n--------------------------------------------------\n");
    LS_LOG("Data type used is : \n");
    LS_LOG("\tstruct node {\n");
    LS_LOG("\tchar *str;\n");
    LS_LOG("\tstruct node *next\n");
    LS_LOG("}\n");
    LS_LOG("--------------------------------------------------\n");
    LS_LOG("Operations Supported are :\n");
    LS_LOG("\t0) Quit the app\n");
    LS_LOG("\t1) Insert a node\n");
    LS_LOG("\t2) Delete a node\n");
    LS_LOG("\t3) View the list\n");
    LS_LOG("\t4) Search the list\n");
    LS_LOG("\t5) Reverse the list\n");
    LS_LOG("\t6) Sort the list in increasing lexographic order\n");

}
int get_choice(void) {
    int choice = 0;
    LS_LOG("Enter the choice\n");
    scanf("%d",&choice);
    return choice;
}

