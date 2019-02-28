#ifndef UNTITLED_LINKED_LIST_H
#define UNTITLED_LINKED_LIST_H

typedef struct linked_list_node
{
	int value;
	struct linked_list_node *next;
} linked_list_node_t;


linked_list_node_t *linked_list_create();

void linked_list_dealloc(linked_list_node_t *linked_list);

void linked_list_push_back(linked_list_node_t *linked_list, int value);

void linked_list_print(linked_list_node_t *linked_list);

void linked_list_push_front(linked_list_node_t **linked_list, int value);

void linked_list_insert(linked_list_node_t *linked_list, int value, linked_list_node_t *towhere);

int linked_list_size(linked_list_node_t *linked_list);

linked_list_node_t *linked_list_end(linked_list_node_t *linked_list);

void linked_list_delete_first(linked_list_node_t **linked_list);

int linked_list_delete_by_value(linked_list_node_t **linked_list, int value);

#endif //UNTITLED_LINKED_LIST_H