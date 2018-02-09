/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 15:39:10 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/01 15:39:12 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_strlen_wchar_t(wchar_t *s)
{
	size_t	n;

	n = 0;
	while (*s != 0)
	{
		s++;
		n++;
	}
	return (n);
}

wchar_t		*ft_strnew_wchar_t(size_t size)
{
	wchar_t	*str;
	size_t	i;

	i = 0;
	str = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1));
	if (str == 0)
		return (NULL);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

wchar_t		*ft_strsub_wchar_t(wchar_t *str, unsigned int start, size_t len)
{
	int		i;
	int		equal;
	wchar_t	*copy;

	i = 0;
	copy = ft_strnew_wchar_t(len);
	if (str && copy)
	{
		while (str[start] && len--)
		{
			copy[i] = str[start];
			i++;
			start++;
		}
		copy[i] = 0;
		equal = ft_strlen_wchar_t(str) - start - len;
		if (equal >= 0)
			return (copy);
	}
	return (0);
}

wchar_t		*ft_strdup_wchar_t(wchar_t *str)
{
	int		i;
	wchar_t	*dup;

	i = 0;
	while (str[i] != 0)
		i++;
	dup = (wchar_t *)malloc(sizeof(wchar_t) * i + 1);
	i = 0;
	if (dup == 0)
		return (0);
	while (str[i] != 0)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

wchar_t		*ft_strjoin_wchar_t(wchar_t *s1, wchar_t *s2)
{
	wchar_t	*str;
	wchar_t	*start;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str = ft_strnew_wchar_t(ft_strlen_wchar_t(s1) + ft_strlen_wchar_t(s2));
	if (str == NULL)
		return (0);
	start = str;
	if (!str)
		return (0);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = 0;
	return (start);
}
