/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:16:25 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/13 19:16:27 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	start = new;
	while ((lst = lst->next))
	{
		tmp = f(lst);
		new->next = tmp;
		new = new->next;
	}
	return (start);
}
