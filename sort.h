#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * direction comparison
 *
 */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumerating boolean values
 * @true: 0
 *@false: 1
 *
 */
typedef enum bool
{
	true,
	false = 0
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/**
 * Our files print_array.c and print_list.c (containing the print_array and print_list functions)
 * will be compiled with your functions during the correction.
 */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/**
 * Our sorting algorithm function prototype
 *
 */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
listint_t *swap_node(listint_t *node, listint_t **list);
















#endif /* SORT_H */
