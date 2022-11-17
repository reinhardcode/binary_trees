#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* STRUCTURES */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
/* PROTOTYPES */
int binary_tree_is_complete(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
int binary_tree_is_perfect(const binary_tree_t *tree);
int is_perfect(binary_tree_t *node, int d, int level);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *array_to_avl(int *array, size_t size);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *array_to_heap(int *array, size_t size);
int *heap_to_sorted_array(heap_t *heap, size_t *size);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
bst_t *bst_search(const bst_t *tree, int value);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
#endif /* _BINARY_TREES_H_ */
