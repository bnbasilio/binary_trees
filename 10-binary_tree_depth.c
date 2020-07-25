#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: depth of tree, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = depth_helper(tree) - 1;
	return (depth);
}

/**
 * depth_helper - calculates tree depth
 * @tree: tree to measure
 *
 * Return: depth of the tree
 */
size_t depth_helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + depth_helper(tree->parent));
}
