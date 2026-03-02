#include "stdio.h"
#include "tests.h"

void run_tests() {
		test_create_node();
		printf("test_create_node ran sucessfully.\n");

		test_delete_list();
		printf("test_delete_list ran sucessfully.\n");

		test_add_node();
		printf("test_add_node ran sucessfully.\n");

		test_delete_node();
		printf("test_delete_node ran sucessfully.\n");

		test_list_search();
		printf("test_list_search ran sucessfully.\n");

		test_list_reverse();
		printf("test_list_reverse ran sucessfully.\n");
};
