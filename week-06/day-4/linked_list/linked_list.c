#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

linked_list_node_t *linked_list_create()
{
	linked_list_node_t *linked_list = (linked_list_node_t*)malloc(sizeof(linked_list_node_t));

	linked_list->value = 0;
	linked_list->next = NULL;

	return linked_list;
}

void linked_list_dealloc(linked_list_node_t *linked_list)
{
	linked_list_node_t *node_to_free = linked_list;

	while(node_to_free != NULL) {
		linked_list_node_t *next_node = node_to_free->next;
		free(node_to_free);
		node_to_free = next_node;
	}
}

void linked_list_push_back(linked_list_node_t *linked_list, int value)
{
	// Allocate memory for a new node and initialize it
	linked_list_node_t *new_node = (linked_list_node_t*)malloc(sizeof(linked_list_node_t));
	new_node->value = value;
	new_node->next = NULL;

	// Iterate through the list to find the last element
	linked_list_node_t *it = linked_list;
	while(it->next != NULL) {
		it = it->next;
	}

	// Set the pointer of the last element to the new node
	it->next = new_node;

	// Alternative loop:
	//for (linked_list_node_t *it = linked_list; it->next != NULL; it = it->next)
}

void linked_list_print(linked_list_node_t *linked_list)
{
	// Iterate through the list
	linked_list_node_t *it = linked_list;
	while(it != NULL) {
		printf("%p: %d\n", it, it->value);
		it = it->next;
	}
}
void linked_list_push_front(linked_list_node_t **linked_list, int value)
{
	linked_list_node_t *new_node = (linked_list_node_t*)malloc(sizeof(linked_list_node_t));
	new_node->value = value;
	new_node->next = *linked_list;
	*linked_list = new_node;
	//return linked_list;
}

void linked_list_insert(linked_list_node_t *linked_list, int value, linked_list_node_t *towhere)
{
	linked_list_node_t *new_node = (linked_list_node_t*)malloc(sizeof(linked_list_node_t));
	new_node->value = value;
	new_node->next = towhere->next;
	towhere->next = new_node;
}

int linked_list_size(linked_list_node_t *linked_list)
{
	linked_list_node_t *it = linked_list;
	int index = 0;
	while(it) {
		index++;
		it = it->next;
	}
	return index;
}

linked_list_node_t *linked_list_end(linked_list_node_t *linked_list)
{
	linked_list_node_t *it = linked_list;
	while(it->next != NULL) {
		it = it->next;
	}
	return it;
}

void linked_list_delete_first(linked_list_node_t **linked_list)
{
	linked_list_node_t *temp = *linked_list;
	*linked_list = (*linked_list)->next;
	free(temp);
}
int linked_list_delete_by_value(linked_list_node_t **linked_list, int value)
{
	linked_list_node_t *it_before = *linked_list;
	linked_list_node_t *it = *linked_list;
	int number_of_deletes = 0;
	while(it) {
		if (it->value == value){
			linked_list_delete_first(&it);
			it_before->next = it;
			number_of_deletes++;
		} else {
			it_before = it;
			it = it->next;
		}
	}
	return number_of_deletes;
}