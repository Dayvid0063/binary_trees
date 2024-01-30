#include "binary_trees.h"

/**
 * binary_tree_uncle - Func finds the uncle of a node
 *
 * @node: Ptr to the node to find the uncle
 *
 * Return: Ptr to the uncle node,or NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* Get a ptr to the grandparent of the node */
	binary_tree_t *grandparent = node->parent->parent;

	return (grandparent->left == node->parent ?
			grandparent->right : grandparent->left);
}
