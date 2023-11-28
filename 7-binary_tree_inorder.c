#include "binary_trees.h"
/**
* binary_tree_inorder - function that print the tree inorder
* @tree: the tree
* @func: the function that print the value
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
