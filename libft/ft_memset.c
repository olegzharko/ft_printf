/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 09:09:29 by ozharko           #+#    #+#             */
/*   Updated: 2017/10/30 09:09:32 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				*ft_memset(void *b, int c, size_t len)
{
	char			*tmp;
	unsigned char	asc;

	tmp = b;
	asc = c;
	while (len-- > 0)
	{
		*tmp = asc;
		tmp++;
	}
	return (b);
}
