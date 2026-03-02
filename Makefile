all:
	clang main.c src/linked_list.c tests/tests.c tests/run_tests.c -o linked_list

debug:
	clang -g -fsanitize=address main.c src/linked_list.c tests/tests.c tests/run_tests.c -o linked_list

clean:
	rm -f linked_list
