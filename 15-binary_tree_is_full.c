#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if full, or 0 if NULL or not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (two_children(tree))
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));

	return (0);
}

/**
 * two_children - checks if node has two children
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if there are 2 children, 0 otherwise
 */
size_t two_children(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
		return (1);

	return (0);
}

/**
 * binary_tree_is_leaf - checks if the given node is a leaf (no children)
 * @node: pointer to the binary tree node to check if leaf
 *
 * Return: 1 if node is a leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
