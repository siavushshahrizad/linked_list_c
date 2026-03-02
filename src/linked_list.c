#include <stdlib.h>
#include "linked_list.h"


LinkedList *list_create(int val) {
		LinkedList *head = malloc(sizeof(LinkedList));
		head->val = val;
		head->next = NULL; 
		return head;
};

void list_add(LinkedList *head, int val) {
		LinkedList *curr = head;

		while (curr->next != NULL) {
				curr = curr->next;
		};

		LinkedList *new_node = malloc(sizeof(LinkedList));
		new_node->val = val;
		new_node->next = NULL;

		curr->next = new_node;
};

int list_delete(LinkedList *head) {
		LinkedList *curr = head;

		int freed = 0;

		while (curr != NULL) {
				LinkedList *temp = curr->next;
				free(curr);
				freed++;
				curr = temp; 
		};

		return freed;
};

// TODO: Edge case one node
int list_pop(LinkedList *head) {
		LinkedList *curr = head;
		LinkedList *prev = head; 

		while (curr->next != NULL) {
				prev = curr;
				curr = curr->next;
		}

		prev->next = NULL;
		int number = curr->val;
		free(curr);

		return number;
};

// Returns first index where a num is found or -1 if not
int list_search(LinkedList *head, int val) {
		LinkedList *curr = head;
		int position = 0;

		while (curr != NULL) {
				if (curr->val == val) {
						return position;
				}
				curr = curr->next;
				position++;
		}

		return -1;
};

LinkedList *list_reverse(LinkedList *head) {
		LinkedList *curr = head;
		LinkedList *prev = NULL;

		while (curr != NULL) {
				LinkedList *tmp = curr->next;
				curr->next = prev;
				prev = curr;
				curr = tmp;
		}

		return prev;
};
