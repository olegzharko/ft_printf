/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:50:37 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/07 11:50:47 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	if (s == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (s[i] == '\0')
		return (ft_strsub(s, i, len - i + 1));
	while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n') && len > i)
		len--;
	return (ft_strsub(s, i, len - i + 1));
	return (0);
}
