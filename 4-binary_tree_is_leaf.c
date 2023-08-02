#include "binary_trees.h"
#include <stdlib.h>

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		return (!node->right && !node->left && node->parent);
	return (0);
}
