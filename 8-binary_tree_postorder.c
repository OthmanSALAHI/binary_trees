#include "binary_trees.h"

/**
 * binary_tree_postorder - function that print the tree in post order
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
