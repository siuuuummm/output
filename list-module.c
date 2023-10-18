#include <stdio.h>
#include <list.module.h>

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

list list_insert_ordered(list p, int val) {
	list elem = malloc(sizeof(*elem));
	elem->value = val;
	elem->next = NULL;
	if(p == NULL || val < p->value) {
		elem->next = p;
		return elem;
	}

	list current = p;
	while(current->next != NULL && current->next->value < val) {
		current = current->next;
	}
	elem->next = current->next;
	current->next = elem;
    return p;
}

list list_cat(list before, list after) {
	if(before == NULL) {
		return NULL;
	}
	list current = before;
	while(current->next != NULL) {
		current = current->next;
	}
	current->next = after;
	return before;
}

list list_insert_tail(list p, int val) {
	list elem = malloc(sizeof(*elem));
	elem->value = val;
	elem->next = NULL;
	if(p == NULL) {
		elem->next = p;
		return elem;
	}
	list current = p;
	while(current->next != NULL) {
		current = current->next;
	}
	elem->next = current->next;
	current->next = elem;
	return p;
}

list list_delete_if(list head, int to_delete) {
	node *temp;
	if(head->value == to_delete) {
		temp = head;
		head = head->next;
		free(temp);
		return head;
	} else {
		node *current = head;
		while(current->next != NULL) {
			if(current->next->value == to_delete) {
				temp = current->next;
				current->next = current->next->next;
				free(temp);
				break;
			} else {
				current = current->next;
			}
		}
	}
	return head;
}

list list_delete_odd(list head) {
	node *temp;
	node *current = head;
	int pos = 1;
	while(current->next != NULL) {
		if(pos % 2 == 1) {
			temp = current->next;
			current->next = current->next->next;
		} else {
			current = current->next;
		}
		pos++;
	}
	free(temp);
	return head;
}

list list_cut_below(list head, int cut_value) {
	node *temp;
	node *current = head;
	while(current->next != NULL) {
		if(head->value < cut_value) {
			temp = head;
			head = head->next;
		}
		if(current->next->value < cut_value) {
			temp = current->next;
			current->next =current->next->next;
		}else {
			current = current->next;
		}
	}
	free(temp);
	return head;
}

list list_dup(list head) {
	return head;
}