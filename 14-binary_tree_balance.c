#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (tree_height(tree->left) - tree_height(tree->right));

	return (0);
}

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lysr = 0, lymn = 0;

		lysr = tree->left ? 1 + tree_height(tree->left) : 1;
		lymn = tree->right ? 1 + tree_height(tree->right) : 1;
		return ((lysr > lymn) ? lysr : lymn);
	}
	return (0);
}
