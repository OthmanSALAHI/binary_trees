#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *Piv, *tic;

	if (!tree || !tree->right)
		return (NULL);

	Piv = tree->right;
	tic = Piv->left;
	Piv->left = tree;
	tree->right = tic;
	if (tic)
		tic->parent = tree;
	tic = tree->parent;
	tree->parent = Piv;
	Piv->parent = tic;
	if (tic)
	{
		if (tic->left == tree)
			tic->left = Piv;
		else
			tic->right = Piv;
	}

	return (Piv);
}
