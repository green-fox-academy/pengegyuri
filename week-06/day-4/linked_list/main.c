#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	linked_list_node_t *linked_list = linked_list_create();

	linked_list_push_back(linked_list, 10);
	linked_list_push_back(linked_list, 30);

	//for (int i = 0; i < 1000; ++i) {
	//	linked_list_push_back(linked_list, i);
	//}

	linked_list_print(linked_list);
	printf("%d\n", linked_list_size(linked_list));
    linked_list_push_front(&linked_list, 5);
	linked_list_print(linked_list);
	printf("%d\n", linked_list_size(linked_list));
	linked_list_insert(linked_list, 3, linked_list->next->next);
	linked_list_print(linked_list);
	printf("%d\n", linked_list_size(linked_list));
	linked_list_node_t *sorted_list = linked_list_bubblesort(linked_list);
	linked_list_print(sorted_list);
	printf("%d\n", linked_list_size(sorted_list));
	linked_list_print(linked_list);
	printf("%d\n", linked_list_size(linked_list));
	/*printf("%d\n", linked_list_size(linked_list));
	//printf("%p\n", linked_list_end(linked_list));
	linked_list_delete_first(&linked_list);
	linked_list_print(linked_list);
	printf("%d\n", linked_list_size(linked_list));
	//printf("%p\n", linked_list_end(linked_list));
	printf("deleted: %d\n", linked_list_delete_by_value(&linked_list, 10));
	linked_list_print(linked_list);
	printf("%d\n", linked_list_size(linked_list));
	//printf("%p\n", linked_list_end(linked_list));*/

	linked_list_dealloc(linked_list);
	return 0;
}