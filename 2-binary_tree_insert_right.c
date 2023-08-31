
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  * binary_tree_insert_right - Adds a new left node to the tree
 *   *
 *    * @parent: Pointer to the parent node of the new node
 *     * @value: Inegter value of the new node
 *      *
 *       * Return: new_node
 *        */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

					if (parent->right != NULL)
							{
										new_node->right = parent->right;
												parent->right->parent = new_node;
													}

						parent->right = new_node;

							return (new_node);
}
