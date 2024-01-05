#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts right child
  * @parent: parent pointer param
  * @value: value of the node param
  * Return: created node's pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeParam = NULL;

	if (parent == NULL)
		return (NULL);
	nodeParam = malloc(sizeof(binary_tree_t));
	if (nodeParam == NULL)
		return (NULL);

	nodeParam->n = value;
	nodeParam->parent = parent;
	nodeParam->left = NULL;
	nodeParam->right = NULL;
	if (parent->right == NULL)
		parent->right = nodeParam;
	else
	{
		nodeParam->right = parent->right;
		parent->right = nodeParam;
		nodeParam->right->parent = nodeParam;
	}
	return (nodeParam);
}
