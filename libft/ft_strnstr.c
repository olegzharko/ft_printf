/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:34:38 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/02 16:34:41 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!*s2)
		return ((char *)s1);
	while (*s1 && n-- >= ft_strlen(s2))
	{
		if (*s1 == *s2 && !ft_memcmp(s1, s2, ft_strlen(s2)))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
