#include <stdio.h>
#include "lnklst_support.h"
#include <stdlib.h>
#include <string.h>

struct mynode {
    char *str;
    struct mynode *next;
};
typedef struct mynode Node;
