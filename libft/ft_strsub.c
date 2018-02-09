/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:35:38 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/06 17:35:40 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		equal;
	char	*copy;
	char	*str;

	i = 0;
	copy = ft_strnew(len);
	str = (char *)s;
	if (str && copy)
	{
		while (str[start] && len--)
		{
			copy[i] = str[start];
			i++;
			start++;
		}
		copy[i] = 0;
		equal = ft_strlen(str) - start - len;
		if (equal >= 0)
			return (copy);
	}
	return (0);
}
