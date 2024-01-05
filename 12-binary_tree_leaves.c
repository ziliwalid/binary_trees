#include "binary_trees.h"
/**
 * binary_tree_is_leaf -  checks if node is a leaf
 * @node: node param -> pointer
 * Return: returns something
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
/**
 * binary_tree_leaves - gets num of leafs
 * @tree: tree param
 * Return: if tree is not there then 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
