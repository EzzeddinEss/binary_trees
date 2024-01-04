#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @t: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If t is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *t)
{
	if (!t)
		return (0);

	size_t lh = t->left ? 1 + binary_tree_height(t->left) : 0;
	size_t rh = t->right ? 1 + binary_tree_height(t->right) : 0;

	return (lh > rh ? lh : rh);
}

