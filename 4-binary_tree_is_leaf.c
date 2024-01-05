#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is leaf (leaf node)
 * @node: pointer node param
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
