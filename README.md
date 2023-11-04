# Project Readme - Binary Trees

## Table of Contents
- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [File Description Definations](#file-description-definations)
- [File Descriptions](#file-descriptions)
- [How to Use](#how-to-use)
- [License](#license)

## Project Description
This project is part of a group project on Binary Trees in the C programming language. The goal is to implement various functions to work with binary trees, including creating nodes, inserting nodes, traversing the tree, and measuring its properties.

## Learning Objectives
By the end of this project, we are expected to be able to explain the following concepts:
- What is a binary tree
- The difference between a binary tree and a Binary Search Tree (BST)
- The possible gain in terms of time complexity compared to linked lists
- The depth, height, and size of a binary tree
- Different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A `README.md` file, at the root of the folder, is mandatory
- The code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No more than 5 functions per file
- The code is allowed to use the standard library

## File Description Definations
### File Name

**Description:**
A brief description of the file's purpose and contents.

**Functions:**

#### 1. Function Name

**Description:**
A description of the function's purpose and what it does.

**Prototype:**
```c
// Function prototype, if applicable
```

**Parameters:**
- `param1`: Description of the first parameter, if any.
- `param2`: Description of the second parameter, if any.

**Return:**
- Description of the return value, if any.

**Notes:**
Any additional notes or explanations about the function or file, if necessary.

## File Descriptions

### `binary_trees.h`

**Description:**
This header file contains the necessary struct definitions and function prototypes used across all the C files in the project.

### `0-binary_tree_node.c`

**Description:**
This file contains the implementation of the function `binary_tree_node`, which creates a binary tree node with the given parent and value.

**Prototype:**
```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

**Parameters:**
- `parent`: A pointer to the parent node.
- `value`: The integer value to be stored in the new node.

**Return:**
- Returns a pointer to the created node.

### `1-binary_tree_insert_left.c`

**Description:**
This file contains the implementation of the function `binary_tree_insert_left`, which inserts a node as the left child of another node.

**Prototype:**
```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

**Parameters:**
- `parent`: A pointer to the parent node.
- `value`: The integer value to be stored in the new node.

**Return:**
- Returns a pointer to the created node.

### `2-binary_tree_insert_right.c`

**Description:**
This file contains the implementation of the function `binary_tree_insert_right`, which inserts a node as the right child of another node.

**Prototype:**
```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

**Parameters:**
- `parent`: A pointer to the parent node.
- `value`: The integer value to be stored in the new node.

**Return:**
- Returns a pointer to the created node.

### `3-binary_tree_delete.c`

**Description:**
This file contains the implementation of the function `binary_tree_delete`, which deletes an entire binary tree.

**Prototype:**
```c
void binary_tree_delete(binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to delete.

**Return:**
- None.

### `4-binary_tree_is_leaf.c`

**Description:**
This file contains the implementation of the function `binary_tree_is_leaf`, which checks if a node is a leaf in the binary tree.

**Prototype:**
```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

**Parameters:**
- `node`: A pointer to the node to check.

**Return:**
- Returns `1` if the node is a leaf, otherwise `0`.

### `5-binary_tree_is_root.c`

**Description:**
This file contains the implementation of the function `binary_tree_is_root`, which checks if a given node is the root of the binary tree.

**Prototype:**
```c
int binary_tree_is_root(const binary_tree_t *node);
```

**Parameters:**
- `node`: A pointer to the node to check.

**Return:**
- Returns `1` if the node is the root, otherwise `0`.

### `6-binary_tree_preorder.c`

**Description:**
This file contains the implementation of the function `binary_tree_preorder`, which traverses the binary tree using pre-order traversal.

**Prototype:**
```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to traverse.
- `func`: A pointer to the function to call for each node. The value in the node must be passed as a parameter to this function.

**Return:**
- None.

### `7-binary_tree_inorder.c`

**Description:**
This file contains the implementation of the function `binary_tree_inorder`, which traverses the binary tree using in-order traversal.

**Prototype:**
```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to traverse.
- `func`: A pointer to the function to call for each node. The value in the node must be passed as a parameter to this function.

**Return:**
- None.

### `8-binary_tree_postorder.c`

**Description:**
This file contains the implementation of the function `binary_tree_postorder`, which traverses the binary tree using post-order traversal.

**Prototype:**
```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to traverse.
- `func`: A pointer to the function to call for each node. The value in the node must be passed as a parameter to this function.

**Return:**
- None.

### `9-binary_tree_height.c`

**Description:**
This file contains the implementation of the function `binary_tree_height`, which measures the height of the binary tree.

**Prototype:**
```c
size_t binary_tree_height(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree.

**Return:**
- Returns the height of the binary tree.

### `10-binary_tree_depth.c`

**Description:**
This file contains the implementation of the function `binary_tree_depth`, which measures the depth of a given node in the binary tree.

**Prototype:**
```c
size_t binary_tree_depth(const binary_tree_t *node);
```

**Parameters:**
- `node`: A pointer to the node.

**Return:**
- Returns the depth of the node.

### `11-binary_tree_size.c`

**Description:**
This file contains the implementation of the function `binary_tree_size`, which measures the size of the binary tree.

**Prototype:**
```c
size_t binary_tree_size(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree.

**Return:**
- Returns the size of the binary tree.

### `12-binary_tree_leaves.c`

**Description:**
This file contains the implementation of the function `binary_tree_leaves`, which counts the number of leaves in the binary tree.

**Prototype:**
```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree.

**

Return:**
- Returns the number of leaves in the binary tree.

### `13-binary_tree_nodes.c`

**Description:**
This file contains the implementation of the function `binary_tree_nodes`, which counts the number of nodes with at least 1 child in the binary tree.

**Prototype:**
```c
size_t binary_tree_nodes(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree.

**Return:**
- Returns the number of nodes with at least 1 child in the binary tree.

### `14-binary_tree_balance.c`

**Description:**
This file contains the implementation of the function `binary_tree_balance`, which measures the balance factor of the binary tree.

**Prototype:**
```c
int binary_tree_balance(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree.

**Return:**
- Returns the balance factor of the binary tree.

### `15-binary_tree_is_full.c`

**Description:**
This file contains a C function named `binary_tree_is_full` that checks if a binary tree is a valid full binary tree. A full binary tree is a binary tree in which every node has either zero or two children.

**Prototype:**
```c
int binary_tree_is_full(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to check.

**Return:**
- Returns `1` if the binary tree is full.
- Returns `0` if the binary tree is not full or if `tree` is `NULL`.

### `16-binary_tree_is_perfect.c`

**Description:**
This file contains a C function named `binary_tree_is_perfect` that checks if a binary tree is a valid perfect binary tree. A perfect binary tree is a binary tree in which all interior nodes have two children, and all leaves are at the same level.

**Prototype:**
```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to check.

**Return:**
- Returns `1` if the binary tree is perfect.
- Returns `0` if the binary tree is not perfect or if `tree` is `NULL`.

### `17-binary_tree_sibling.c`

**Description:**
This file contains a C function named `binary_tree_sibling` that finds the sibling of a given node in a binary tree.

**Prototype:**
```c
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```

**Parameters:**
- `node`: A pointer to the node to find the sibling for.

**Return:**
- Returns a pointer to the sibling node.
- Returns `NULL` if `node` is `NULL`, or if the parent is `NULL`, or if `node` has no sibling.

### `18-binary_tree_uncle.c`

**Description:**
This file contains a C function named `binary_tree_uncle` that finds the uncle of a given node in a binary tree. The uncle is the sibling of the node's parent.

**Prototype:**
```c
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

**Parameters:**
- `node`: A pointer to the node to find the uncle for.

**Return:**
- Returns a pointer to the uncle node.
- Returns `NULL` if `node` is `NULL`, or if the parent is `NULL`, or if the uncle is `NULL` (no uncle exists).

### `19-binary_trees_ancestor.c`

**Description:**
This file contains a C function named `binary_trees_ancestor` that finds the lowest common ancestor of two nodes in a binary tree.

**Prototype:**
```c
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
```

**Parameters:**
- `first`: A pointer to the first node.
- `second`: A pointer to the second node.

**Return:**
- Returns a pointer to the lowest common ancestor node.
- Returns `NULL` if no common ancestor was found.

### `20-binary_tree_levelorder.c`

**Description:**
This file contains a C function named `binary_tree_levelorder` that goes through a binary tree using level-order traversal (breadth-first search) and applies a given function to each node.

**Prototype:**
```c
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to traverse.
- `func`: A pointer to the function to call for each node. The value in the node must be passed as a parameter to this function.

**Return:**
- None.

### `21-binary_tree_is_complete.c`

**Description:**
This file contains a C function named `binary_tree_is_complete` that checks if a binary tree is a complete binary tree. A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.

**Prototype:**
```c
int binary_tree_is_complete(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to check.

**Return:**
- Returns `1` if the binary tree is complete.
- Returns `0` if the binary tree is not complete or if `tree` is `NULL`.

### `22-binary_tree_rotate_left.c`

**Description:**
This file contains a C function named `binary_tree_rotate_left` that performs a left-rotation on a binary tree.

**Prototype:**
```c
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the tree to rotate.

**Return:**
- Returns a pointer to the new root node of the tree after rotation.

### `23-binary_tree_rotate_right.c`

**Description:**
This file contains a C function named `binary_tree_rotate_right` that performs a right-rotation on a binary tree.

**Prototype:**
```c
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the tree to rotate.

**Return:**
- Returns a pointer to the new root node of the tree after rotation.

### `24-binary_tree_is_bst.c`

**Description:**
This file contains a C function named `binary_tree_is_bst` that checks if a binary tree is a valid Binary Search Tree (BST).

**Prototype:**
```c
int binary_tree_is_bst(const binary_tree_t *tree);
```

**Parameters:**
- `tree`: A pointer to the root node of the binary tree to check.

**Return:**
- Returns `1` if `tree` is a valid BST.
- Returns `0` if `tree` is not a valid BST or if `tree` is `NULL`.

### `25-bst_insert.c`

**Description:**
This file contains a C function named `bst_insert` that inserts a value in a Binary Search Tree (BST).

**Prototype:**
```c
bst_t *bst_insert(bst_t **tree,

 int value);
```

**Parameters:**
- `tree`: A double pointer to the root node of the BST to insert the value.
- `value`: The value to store in the node to be inserted.

**Return:**
- Returns a pointer to the created node, or `NULL` on failure. If the address stored in `tree` is `NULL`, the created node becomes the root node. If the value is already present in the tree, it must be ignored.

### `112-array_to_bst.c`

**Description:**
This file contains the implementation of a function `bst_t *array_to_bst(int *array, size_t size)`. The function takes in an array of integers and the size of the array as input. It builds a Binary Search Tree (BST) from the given array and returns a pointer to the root node of the created BST. If a value in the array is already present in the tree, it is ignored. The implementation uses the functions defined in files `111-bst_insert.c` and `0-binary_tree_node.c`.

### `113-bst_search.c`

**Description:**
This file contains the implementation of a function `bst_t *bst_search(const bst_t *tree, int value)`. The function takes in a pointer to the root node of a Binary Search Tree (BST) and a value to search for in the tree. It returns a pointer to the node containing the value if found, otherwise, it returns NULL. If the tree is NULL or if the value is not found, the function returns NULL.

### `114-bst_remove.c`

**Description:**
This file contains the implementation of a function `bst_t *bst_remove(bst_t *root, int value)`. The function takes in a pointer to the root node of a Binary Search Tree (BST) and a value to remove from the tree. Once located, the node containing the value is removed and freed, and the tree is rebalanced if necessary to maintain the properties of a BST. The function returns a pointer to the new root node of the tree after removing the desired value.

### `115-O`

**Description:**
This file contains the average time complexities of various operations on a Binary Search Tree (BST). Each line provides the average time complexity for one of the operations:

1. Inserting the value n
2. Removing the node with the value n
3. Searching for a node in a BST of size n

### `120-binary_tree_is_avl.c`

**Description:**
This file contains the implementation of a function `int binary_tree_is_avl(const binary_tree_t *tree)`. The function checks if a given binary tree is a valid AVL Tree or not. An AVL Tree is a Balanced Binary Search Tree (BST) with the difference between heights of left and right subtrees not exceeding one. The function returns 1 if the tree is a valid AVL Tree; otherwise, it returns 0.

### `121-avl_insert.c`

**Description:**
This file contains the implementation of a function `avl_t *avl_insert(avl_t **tree, int value)`. The function inserts a value into an AVL Tree, ensuring that the resulting tree remains balanced. The function returns a pointer to the created node containing the value or NULL on failure. The AVL Tree is represented using nodes of type `avl_t`.

### `122-array_to_avl.c`

**Description:**
This file contains the implementation of a function `avl_t *array_to_avl(int *array, size_t size)`. The function builds an AVL Tree from an array of integers. The function returns a pointer to the root node of the created AVL tree or NULL on failure. If a value of the array is already present in the tree, this value is ignored. The AVL Tree is represented using nodes of type `avl_t`.

### `123-avl_remove.c`

**Description:**
This file contains the implementation of a function `avl_t *avl_remove(avl_t *root, int value)`. The function removes a node with a given value from an AVL Tree while maintaining the AVL balance property. The function returns a pointer to the new root node of the tree after removing the desired value and after rebalancing.

### `124-sorted_array_to_avl.c`

**Description:**
This file contains the implementation of a function `avl_t *sorted_array_to_avl(int *array, size_t size)`. The function builds an AVL Tree from a sorted array of integers. The function returns a pointer to the root node of the created AVL tree or NULL on failure. The AVL Tree is represented using nodes of type `avl_t`.

### `125-O`

**Description:**
This file contains the average time complexities of various operations on an AVL Tree. Each line provides the average time complexity for one of the operations:

1. Inserting the value n
2. Removing the node with the value n
3. Searching for a node in an AVL tree of size n

### `130-binary_tree_is_heap.c`

**Description:**
This file contains a C function named `binary_tree_is_heap` that checks if a binary tree is a valid Max Binary Heap. The function takes a pointer to the root node of the binary tree as input and returns 1 if the tree is a valid Max Binary Heap, and 0 otherwise. The function checks the properties of a Max Binary Heap, such as being a complete tree and the value at the root being maximum among all values in the binary heap.

### `131-heap_insert.c`

**Description:**
This file contains a C function named `heap_insert` that inserts a value into a Max Binary Heap. The function takes a double pointer to the root node of the heap and an integer value to be inserted. The function returns a pointer to the created node or NULL on failure. The Max Heap ordering is respected, and the function ensures the tree remains a valid Max Binary Heap after insertion.

### `132-array_to_heap.c`

**Description:**
This file contains a C function named `array_to_heap` that builds a Max Binary Heap from an array. The function takes a pointer to the first element of the array and the size of the array as input. It returns a pointer to the root node of the created Binary Heap or NULL on failure.

### `133-heap_extract.c`

**Description:**
This file contains a C function named `heap_extract` that extracts the root node of a Max Binary Heap. The function takes a double pointer to the root node of the heap as input and returns the value stored in the root node. The root node is freed, and the last level-order node of the heap replaces it. The heap is then rebuilt if necessary.

### `134-heap_to_sorted_array.c`

**Description:**
This file contains a C function named `heap_to_sorted_array` that converts a Binary Max Heap to a sorted array of integers. The function takes a pointer to the root node of the heap and a pointer to store the size of the array. It returns a pointer to the sorted array in descending order.

`135-O`

**Description:**
This file contains the average time complexities of operations on a Binary Heap. The average time complexities are given for the following operations (one answer per line):
- Inserting the value n
- Extracting the root node
- Searching for a node in a binary heap of size n










## How to Use
1. Clone the GitHub repository: [binary_trees](https://github.com/your_username/binary_trees).
2. Navigate to the project folder and compile the files using `gcc`:

   ```
   gcc -Wall -Werror -Wextra -pedantic binary_tree_print.c [file_name.c] -o [output_name]
   ```

   Replace `[file_name.c]` with the name of the C file you want to compile, and `[output_name]` with the desired name for the output executable.

3. Run the compiled executable:

   ```
   ./[output_name]
   ```

   Replace `[output_name]` with the name you specified in step 2.

## License

