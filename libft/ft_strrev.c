/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:16:56 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/13 19:16:58 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		irev;
	int		i;
	char	tmp[ft_strlen(str)];

	i = 0;
	if (str)
	{
		while (str[i])
		{
			tmp[i] = str[i];
			i++;
		}
		irev = i - 1;
		i = 0;
		while (i != irev + 1)
		{
			str[i] = tmp[irev - i];
			i++;
		}
	}
	return (str);
}
