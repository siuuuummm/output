#include "client.h"

typedef struct _node {
    unsigned int id;
    client person;
} l_node;

typedef struct {
    l_node *head;
    l_node *tail;
} list_cl;

#define L_EMPTYLIST_CL {NULL, NULL}
list_cl class = L_EMPTYLIST_CL;