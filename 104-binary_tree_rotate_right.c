#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *piv, *tic;

	if (!tree || !tree->left)
		return (NULL);

	piv = tree->left;
	tic = piv->right;
	piv->right = tree;
	tree->left = tic;
	if (tic)
		tic->parent = tree;
	tic = tree->parent;
	tree->parent = piv;
	piv->parent = tic;
	if (tic)
	{
		if (tic->left == tree)
			tic->left = piv;
		else
			tic->right = piv;
	}

	return (piv);
}
