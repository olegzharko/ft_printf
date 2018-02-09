/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:49:28 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/01 11:50:23 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(const char *str)
{
	int		i;
	char	*dup;

	i = 0;
	while (str[i] != 0)
		i++;
	dup = (char *)malloc(sizeof(char) * i + 1);
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
