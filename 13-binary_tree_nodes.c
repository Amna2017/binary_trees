#include "binary_trees.h"
/**
 * binary_tree_nodes - give me numbers of the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	nodes = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
	nodes++;
	return (nodes);
}
