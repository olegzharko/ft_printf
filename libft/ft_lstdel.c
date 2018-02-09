/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:15:51 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/13 19:15:52 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst && *alst && del)
	{
		while (*alst)
		{
			tmp = *alst;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = tmp->next;
		}
		*alst = NULL;
	}
}
