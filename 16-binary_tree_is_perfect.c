#include "binary_trees.h"
/**
 * binary_tree_height - gets the height
 * @tree: tree param
 * Return: 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
/**
 * binary_tree_size - gets size
 * @tree: tree param
 * Return: 0 if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
}
/**
 * binary_tree_is_perfect - does some checking
 * @tree: tree param
 * Return: 0 if tree is null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t z = 0, ps = 0;

	if (tree == NULL)
		return (0);
	z = binary_tree_height(tree);
	ps = (1 << (z + 1)) - 1;
	if (ps == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
