#include "binary_trees.h"
/**
 * find_height - calc the height of tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */

int find_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
		return (0);

	rightHeight = find_height(tree->right);
	leftHeight = find_height(tree->left);

	return ((leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = find_height(tree->left);
	right_height = find_height(tree->right);

	if (!tree->left && !tree->right)
                return (1);

	if (left_height != right_height)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
