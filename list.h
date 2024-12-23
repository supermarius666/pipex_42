/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:10:04 by mdumitru          #+#    #+#             */
/*   Updated: 2024/12/23 22:33:04 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <stdlib.h>

typedef struct s_list
{
	void			*value;
	struct s_list	*next;
}	t_list;

t_list	*new_list(void *value);
int		get_list_size(t_list *list);
void	list_add_back(t_list **list, t_list *node);


#endif 