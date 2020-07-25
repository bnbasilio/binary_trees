#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * balance factor is difference in height of two children's subtrees
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_helper(tree->left) - height_helper(tree->right));
}

/* using height_helper, not height func, to include root's child in balance */

/**
 * height_helper - calculates tree height
 * @tree: tree to measure
 *
 * Return: height of the tree
 */
size_t height_helper(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = (1 + height_helper(tree->left));
	right = (1 + height_helper(tree->right));

	if (left > right)
		return (left);

	return (right);
}
