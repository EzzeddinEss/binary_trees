#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If node is NULL or has no parent, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);

	return (1 + binary_tree_depth(node->parent));
}
