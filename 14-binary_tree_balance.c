#include "binary_trees.h"
size_t _height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (_height(tree->left) - _height(tree->right));

	return (0);
}

/**
 * _height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t _height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lisr = 0, limn = 0;

		lisr = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		limn = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lisr > limn) ? lisr : limn);
	}
	return (0);
}
