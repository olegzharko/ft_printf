/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:34:49 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/01 11:34:52 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)arr == (unsigned char)c)
			return ((unsigned char *)arr);
		arr++;
	}
	return (0);
}
