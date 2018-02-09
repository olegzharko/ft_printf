/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:34:27 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/06 13:34:29 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	size_t	len;
	char	*scopy;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	scopy = ft_strnew(len);
	if (scopy)
	{
		while (s[i])
		{
			scopy[i] = (*f)(s[i]);
			i++;
		}
		return (scopy);
	}
	return (0);
}
