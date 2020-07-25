#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts new binary tree node as parent-right
 * if parent-right exists, becomes new node's right child
 * @parent: parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	new->right = parent->right;
	parent->right = new;

	if (new->right)
		new->right->parent = new;

	return (new);
}
