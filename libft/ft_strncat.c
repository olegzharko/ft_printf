/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 15:46:34 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/01 15:46:36 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strncat(char *des, const char *app, size_t n)
{
	int		i;
	char	*start;

	start = des;
	i = 0;
	while (*des)
		des++;
	while (*app && n--)
	{
		*des = *app;
		des++;
		app++;
	}
	*des = '\0';
	return (start);
}
