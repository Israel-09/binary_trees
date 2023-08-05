#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @tree: pointer to the node to check
 *
 * Return: 1 if node is leaf, otherwise 0;
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		return (!node->right && !node->left && node->parent);
	return (0);
}
