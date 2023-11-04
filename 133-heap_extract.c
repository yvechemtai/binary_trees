#include "binary_trees.h"

/**
 * heap_extract - extracts the root node of a Max Binary Heap
 * @root: double pointer to the root node of heap
 *
 * Return: value stored in the root node
 */
int heap_extract(heap_t **root)
{
	if (!root || !*root)
		return (0);

	int value = (*root)->n;
	heap_t *last = get_last_node(*root);

	if (*root == last)
	{
		free(*root);
		*root = NULL;
		return (value);
	}

	swap(&last->n, &(*root)->n);

	if (last->parent && last->parent->left == last)
		last->parent->left = NULL;
	else if (last->parent)
		last->parent->right = NULL;

	free(last);
	heapify(*root);

	return (value);
}

/**
 * get_last_node - returns the last node of the heap in level-order traversal
 * @root: pointer to the root node of heap
 *
 * Return: pointer to the last node of the heap
 */
heap_t *get_last_node(heap_t *root)
{
	if (!root)
		return (NULL);

	queue_t *queue = NULL;
	heap_t *node = NULL;

	queue_push(&queue, root);

	while (queue)
	{
		node = (heap_t *)queue_pop(&queue);

		if (node->left)
			queue_push(&queue, node->left);

		if (node->right)
			queue_push(&queue, node->right);
	}

	return (node);
}

/**
 * heapify - rebuilds the heap after the root node is replaced
 * @root: pointer to the root node of heap
 */
void heapify(heap_t *root)
{
	if (!root)
		return;

	heap_t *largest = root;
	heap_t *left = root->left;
	heap_t *right = root->right;

	if (left && left->n > largest->n)
		largest = left;

	if (right && right->n > largest->n)
		largest = right;

	if (largest != root)
	{
		swap(&root->n, &largest->n);
		heapify(largest);
	}
}

/**
 * swap - swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
