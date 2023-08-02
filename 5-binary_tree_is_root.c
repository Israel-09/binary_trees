#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root.
 * @node: is a pointer to the node to check
 *
 * Return: if node is root return 1 otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
		return (!node->parent);
	return (0);
}
