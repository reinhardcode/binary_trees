#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes hrough a binary tree
 * using in order traversal
 * @tree: pointer to root node
 * @func: function to carry out on each node
 * Return: nothing on all conditions
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right != NULL)
	binary_tree_inorder(tree->right, func);
}
