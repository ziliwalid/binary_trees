#include "binary_trees.h"
/**
 * binary_tree_size - does something
 * @tree: tree param
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t nL, nR;

		nL = binary_tree_size(tree->left);
		nR = binary_tree_size(tree->right);
		return (1 + nL + nR);
	}
}
