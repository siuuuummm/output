#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list-module.h"

int main()
{
	list head = NULL;
	list l2 = NULL;

	/* insert some numbers in the list... */
	head = list_insert_head(head, 10);
	head = list_insert_head(head, 2);
	head = list_insert_head(head, 15);
    head = list_insert_ordered(head, 16);
	//l2 = list_insert_ordered(l2, 17);
	//head = list_cat(head, l2);
	head = list_insert_tail(head, 19);
	//head = list_delete_if(head, 2);
	//head = list_insert_head(head, 2);
	head = list_insert_ordered(head, 7);
	//head = list_delete_odd(head);
	head = list_cut_below(head, 10);
	head = list_dup(head);
	/* ... print them... */
	list_print(head);
	/* ... and clean everything up  */
	list_free(head);

	return 0;
}