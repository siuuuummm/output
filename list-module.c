#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

list list_delete_if(list head, int to_delete) {
	list p = head, q;
	if(head == NULL) {
		return NULL;
	} else {
		if(head->value == to_delete) {
			head = head->next;
			free(p);
			return head;
		}
		for(p = head; p->next != NULL; p = p->next) {
			if(p->next->value == to_delete) {
				q = p->next->next;
				free(p->next);
				p->next = q;
			}
		}
	}
	return head;
}

list list_delete_odd(list head) {
	list p;
	if(head == NULL) {
		return NULL;
	}
	p = head->next;
	free(head);
	if(p == NULL) {
		return NULL;
	}
	p->next = list_delete_odd(p->next);
	return p;
}

list list_cut_below(list head, int cut_value) {
	list p = head, q;
	if(head == NULL) {
		return NULL;
	} else {
		if(head->value < cut_value) {
			head = head->next;
		}
		for(p = head; p->next != NULL; p = p->next) {
			if(p->next->value < cut_value) {
				q = p->next->next;
				p->next = q;
				break;
			}
		}
	}
	return head;
}

list list_dup(list head) {
	list p;
	if(head == NULL) {
		return NULL;
	}
	p = malloc(sizeof(*p));
	memcpy(p, head, sizeof(*p));
	p->next = list_dup(head->next);
	return p;
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