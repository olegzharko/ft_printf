/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:58:20 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/06 14:58:22 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	len;
	char	*scopy;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	scopy = ft_strnew(len);
	if (scopy)
	{
		while (s[i])
		{
			scopy[i] = (*f)(i, s[i]);
			i++;
		}
		return (scopy);
	}
	return (0);
}
