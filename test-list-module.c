#include <stdio.h>
#include <list.module.h>

int main()
{
	list head = NULL;
	list tail = NULL;

	/* insert some numbers in the list... */
	head = list_insert_ordered(head, 10);
	head = list_insert_ordered(head, 2);
	head = list_insert_ordered(head, 15);
    tail = list_insert_ordered(tail, 13);
	tail = list_insert_ordered(tail, 9);
	head = list_cat(head, tail);
	head = list_insert_tail(head, 1);
	head = list_insert_tail(head, 16);
	head = list_delete_if(head, 9);
	head = list_insert_ordered(head, 20);
	tail = list_insert_tail(tail, 36);
	head = list_delete_odd(head);
	head = list_insert_ordered(head, 90);
	head = list_insert_ordered(head, 85);
	head = list_insert_ordered(head, 100);
	head = list_insert_ordered(head, 10);
	head = list_insert_ordered(head, 23);
	head = list_cut_below(head, 50);
	head = list_dup(head);
	/* ... print them... */
	list_print(head);
	/* ... and clean everything up  */
	list_free(head);

	return 0;
}