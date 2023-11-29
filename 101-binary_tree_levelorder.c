#include "binary_trees.h"
/**
 * binary_tree_levelorder - traverses a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;
	height = _tree_height(tree);
	for (i = 1; i <= height; i++)
		_tree_level(tree, i, func);
}
/*==========================================================*/
/**
 * _tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t _tree_height(const binary_tree_t *tree)
{
	size_t lisr, limn;

	if (!tree)
		return (0);
	lisr = _tree_height(tree->left);
	limn = _tree_height(tree->right);
	return ((limn >= lisr ? 1 + limn : 1 + lisr));
}
/*==========================================================*/
/**
 * _tree_level - perform a function on a specific level of a binary tree
 * @tree: pointer to the root of the tree
 * @level: level of the tree to perform a function on
 * @func: function to perform
 *
 * Return: void
 */
void _tree_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		_tree_level(tree->left, level - 1, func);
		_tree_level(tree->right, level - 1, func);
	}
}
