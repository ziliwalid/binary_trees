#include "binary_trees.h"
/**
 * binary_tree_depth - does some magic
 * @tree: pointer tree param
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
