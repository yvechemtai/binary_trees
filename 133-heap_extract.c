#include "binary_trees.h"

/**
 * heap_extract - Extracts the root node of a Max Binary Heap
 *
 * @root: Double pointer to the root node of the heap
 *
 * Return: Value stored in the root node
 */
int heap_extract(heap_t **root)
{
    int value;
    heap_t *last_node, *parent;

    if (root == NULL || *root == NULL)
        return (0);

    value = (*root)->n;
    last_node = get_last_node(*root);

    if (*root == last_node)
    {
        free(*root);
        *root = NULL;
        return (value);
    }

    parent = get_parent(*root, last_node);
    if (parent->left == last_node)
        parent->left = NULL;
    else
        parent->right = NULL;

    (*root)->n = last_node->n;
    free(last_node);

    heapify_down(*root);

    return (value);
}

/**
 * get_last_node - Gets the last node of a Max Binary Heap
 *
 * @root: Pointer to the root node of the heap
 *
 * Return: Pointer to the last node of the heap
 */
heap_t *get_last_node(heap_t *root)
{
    int height, i;
    heap_t *node;

    height = binary_tree_height(root);

    for (i = 0; i <= height; i++)
    {
        node = get_node_at_level(root, i);
    }

    return (node);
}

/**
 * get_node_at_level - Gets the node at a given level of a Max Binary Heap
 *
 * @root: Pointer to the root node of the heap
 * @level: Level of the node to get
 *
 * Return: Pointer to the node at the given level
 */
heap_t *get_node_at_level(heap_t *root, int level)
{
    heap_t *node;

    if (root == NULL)
        return (NULL);

    if (level == 0)
        return (root);

    node = get_node_at_level(root->left, level - 1);
    if (node == NULL)
        node = get_node_at_level(root->right, level - 1);

    return (node);
}

/**
 * get_parent - Gets the parent of a node in a Max Binary Heap
 *
 * @root: Pointer to the root node of the heap
 * @node: Pointer to the node to get the parent of
 *
 * Return: Pointer to the parent of the given node
 */
heap_t *get_parent(heap_t *root, heap_t *node)
{
    heap_t *parent;

    if (root == NULL || root == node)
        return (NULL);

    if (root->left == node || root->right == node)
        return (root);

    parent = get_parent(root->left, node);
    if (parent == NULL)
        parent = get_parent(root->right, node);

    return (parent);
}

/**
 * heapify_down - Heapifies a Max Binary Heap after extracting the root node
 *
 * @root: Pointer to the root node of the heap
 */
void heapify_down(heap_t *root)
{
    heap_t *largest, *node;

    if (root == NULL)
        return;

    node = root;

    while (1)
    {
        largest = node;

        if (node->left != NULL && node->left->n > largest->n)
            largest = node->left;

        if (node->right != NULL && node->right->n > largest->n)
            largest = node->right;

        if (largest == node)
            break;

        swap_nodes(node, largest);
        node = largest;
    }
}

/**
 * swap_nodes - Swaps two nodes in a Max Binary Heap
 *
 * @node1: Pointer to the first node to swap
 * @node2: Pointer to the second node to swap
 */
void swap_nodes(heap_t *node1, heap_t *node2)
{
    int temp;

    temp = node1->n;
    node1->n = node2->n;
    node2->n = temp;
}
