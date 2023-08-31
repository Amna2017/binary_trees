#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *  * binary_tree_insert_left - Adds a new left node to the tree
 *   *
 *    * @parent: Pointer to the parent node of the new node
 *     * @value: Inegter value of the new node
 *      *
 *       * Return: new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		if (parent == NULL)
			{
				return (NULL);
			}

			binary_tree_t *new_node = binary_tree_node(parent, value);

				if (new_node == NULL)
				{
					return (NULL);
				}
				if (parent->left != NULL)
				{
										new_node->left = parent->left;
												parent->left->parent = new_node;
													}
						parent->left = new_node;

							return (new_node);
}
