/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:23:32 by mdumitru          #+#    #+#             */
/*   Updated: 2024/12/23 22:32:56 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

/* allocate memory for a new list*/
t_list	*new_list(void *value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

/* get the size of the list */
int		get_list_size(t_list *list)
{
	if (!list)
		return (0);
	return (1 + list_size(list->next));	
}

/* add a node at the end of the list */
void	list_add_back(t_list **list, t_list *node)
{
	t_list	*temp;

	if (!node)
		return ;
	if (!(*list))
	{
		*list = node;
		return ;
	}
	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}