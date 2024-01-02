#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 *@parent: parent pointer param
 *@value: value param
 * Return: pointer to the node if no NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n = malloc(sizeof(binary_tree_t));

	if (n == NULL)
		return (NULL);
	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;
	return (n);
}
