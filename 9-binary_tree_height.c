#include "binary_trees.h"

/**
 * tree_height - main height function.
 * @tree: pointer to the current node.
 * @level: level of the node to its leaf
 * Return: the height of the node.
 */
size_t tree_height(const binary_tree_t *tree, size_t level)
{
	size_t r_height, l_height;

	if (!tree)
		return (level);

	r_height = tree_height(tree->left, level + 1);
	l_height = tree_height(tree->right, level + 1);

	if (r_height > l_height)
		return (r_height);
	return (l_height);

}

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the node to measure.
 * Return: on success, height of the node. Otherwise
 * returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree, -1));
}
