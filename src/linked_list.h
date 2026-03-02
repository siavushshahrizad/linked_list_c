typedef struct linked_list {
		int val;
		struct linked_list *next;
} LinkedList;

LinkedList *list_create(int val);
int list_delete(LinkedList *head);
void list_add(LinkedList *head, int val);
int list_pop(LinkedList *head);
int list_search(LinkedList *head, int val);
LinkedList *list_reverse(LinkedList *head);
