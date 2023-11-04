#include "binary_trees.h"

/**
 * heap_to_sorted_array - Converts a Binary Max Heap to a sorted array of integers
 *
 * @heap: Pointer to the root node of the heap to convert
 * @size: Address to store the size of the array
 *
 * Return: Pointer to the sorted array of integers
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
    int *array, i;

    if (heap == NULL || size == NULL)
        return (NULL);

    *size = binary_tree_size(heap);
    array = malloc(sizeof(int) * (*size));
    if (array == NULL)
        return (NULL);

    for (i = 0; i < (int)*size; i++)
        array[i] = heap_extract(&heap);

    return (array);
}
