#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node to the left of a parent node.
 * @parent: pointer to the parent node of the node to be created.
 * @value: value to put in the node.
 *
 * Return: on success a pointer to the new node, on failure NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
		return (new_node);
	}
	parent->left = new_node;
	new_node->left = NULL;
	return (new_node);
}
