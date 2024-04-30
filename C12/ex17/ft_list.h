/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 04:41:19 by npentini          #+#    #+#             */
/*   Updated: 2024/05/01 00:45:50 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);
void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)());
int		error_handler(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)());
void	sorted_list_insert(t_list **begin_list1,
			t_list *current1, int (*cmp)());

#endif