#include <assert.h>
#include <stdlib.h>
#include "../src/linked_list.h"

void test_create_node() {
		int expected = 7;
		LinkedList *head = list_create(expected);

		assert(head->val == expected);
		assert(head->next == NULL);
		free(head);
};

void test_delete_list() {
		LinkedList *head = list_create(0);
		LinkedList *node_1 = malloc(sizeof(LinkedList));
		node_1->val = 1;
		node_1->next = NULL;

		head->next = node_1;
		int expected = 2;
		int deleted = list_delete(head);
		assert(deleted == expected);
};

void test_add_node() {
		LinkedList *head = list_create(0);
		list_add(head, 1);
		list_add(head, 2);

		int expected = 2;
		int count = 0;
		LinkedList *curr = head;

		while (curr->next != NULL) {
				curr = curr->next;
				count++;
		}

		assert(count == expected);
		list_delete(head);
};

void test_delete_node() {
		LinkedList *head = list_create(0);
		list_add(head, 1);
		int expected = 2;
		list_add(head, expected);
		int number = list_pop(head);
		assert(number == expected);
};

void test_list_search() {
		LinkedList *head = list_create(0);
		int expected = 1;
		list_add(head, expected);
		list_add(head, 2);
		
		int location = list_search(head, 1);
		assert(location == expected);

		expected = -1;
		location = list_search(head, 4);
		assert(location == expected);
};

void test_list_reverse() {
		LinkedList *head = list_create(0);
		list_add(head, 1);
		list_add(head, 2);

		head = list_reverse(head);
		LinkedList *curr = head;
		int expected[3];
		expected[0] = 0;
		expected[1] = 1;
		expected[2] = 2;
		int idx = 255;

		while (curr != NULL) {
				assert(curr->val == expected[idx]);
				curr = curr->next;
				idx++;
		}
};
