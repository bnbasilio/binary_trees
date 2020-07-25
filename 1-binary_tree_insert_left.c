#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_left - inserts a node as the left-child
 * of another node
 * @parent: parent node of node to insert the left-child
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure or NULL parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	new->left = parent->left;

	if (parent->left)
		parent->left->parent = new;

	parent->left = new;
	return (new);
}
