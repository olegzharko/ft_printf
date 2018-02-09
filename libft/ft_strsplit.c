/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:13:20 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/13 19:13:23 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strsp(char *s, char **arr, char c)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			k = 0;
			if (!(arr[j] = malloc(ft_wrdln((char *)s, i, c) + 1)))
			{
				while (arr[j])
					free(arr[j--]);
				free(arr);
			}
			while (s[i] != c && s[i])
				arr[j][k++] = s[i++];
			arr[j++][k] = '\0';
		}
	}
	arr[j] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	if (!(arr = malloc(sizeof(char *) * (ft_wrdcnt((char *)s, c) + 1))))
		return (NULL);
	ft_strsp((char *)s, arr, c);
	return (arr);
}
