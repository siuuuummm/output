#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node * next;   /* pointer to the same structure */
} node;

typedef node* list;

/*
 * Assume that the list is in increasing order and insert the element
 * preserving the increasing order
 */
list list_insert_ordered(list p, int val);

/*
 * Concatenate two lists
 */
list list_cat(list before, list after);

/*
 * Insert elements at the head of the list
 */
list list_insert_head(list p, int val);

/*
 * Insert elements at the tail of the list
 */
list list_insert_tail(list p, int val);

list list_delete_if(list head, int to_delete);

list list _delete_odd(list head);

list list_cut_below(list head, int cut_value);

list list_dup(list head);

/*
 * Print the list content
 */
void list_print(list p);

/*
 * Free the list
 */

void list_free(list p);

int main()
{
	list head = NULL;
	list l2 = NULL;

	/* insert some numbers in the list... */
	head = list_insert_head(head, 10);
	head = list_insert_head(head, 2);
	head = list_insert_head(head, 15);
    head = list_insert_ordered(head, 13);
	//l2 = list_insert_ordered(l2, 17);
	//head = list_cat(head, l2);
	head = list_insert_tail(head, 19);
	/* ... print them... */
	list_print(head);
	/* ... and clean everything up  */
	list_free(head);

	return 0;
}

list list_insert_ordered(list p, int val) {
    int tmp;
    if (p == NULL) {
        return list_insert_head(p, val);
    } else {
        if(p->value > val) {
            return list_insert_head(p, val);
        } else {
            p->next = list_insert_ordered(p->next, val);
			return p;
        }
    }
}

list list_cat(list before, list after) {
	list p_iter;
	if(before == NULL) {
		return after;
	}
	for(p_iter = before; p_iter->next; p_iter = p_iter->next){
		p_iter->next = after;
	}
	return before;
}

list list_insert_tail(list p, int val) {
	list q;
	if(p == NULL) {
		return list_insert_head(p, val);
	} else {
		p->next = list_insert_tail(p->next, val);
	}
	return p;
}

list list_insert_head(list p, int val)
{
	list new_el;

	/* Allocate the new node */
	new_el = malloc(sizeof(*new_el));
	/* Setting the data */
	new_el->value = val;
	/* head insertion: old head becomes .next field of new head */
	new_el->next = p;
	/* new head is the pointer to the new node */
	return new_el;
}

list list_delete_if(list head, list to_delete) {
	while(head)
}

void list_print(list p)
{
	/* Looping all nodes until p == NULL */
	if (p == NULL) {
		printf("Empty list\n");
		return;
	}
	printf("[%i]", p->value);
	for(; p->next!=NULL; p = p->next) {
		printf(" -> [%i]", p->next->value);
	}
	printf("\n");
}

void list_free(list p)
{
	/* If p ==  NULL, nothing to deallocate */
	if (p == NULL) {
		return;
	}
	/* First deallocate (recursively) the next nodes... */
	list_free(p->next);
	/* ... then deallocate the node itself */
	free(p);
}