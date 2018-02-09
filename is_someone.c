/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_someone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:11:01 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/10 10:29:59 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		is_flags(char key)
{
	int		i;
	char	*type;

	i = -1;
	type = "#-0+ ";
	while (type[++i])
		if (key == type[i])
			return (1);
	return (0);
}

int		is_width(char key)
{
	int		i;

	i = -1;
	if ('0' <= key && key <= '9')
		return (1);
	return (0);
}

int		is_precition(char key)
{
	int		i;

	i = -1;
	if ('0' <= key && key <= '9')
		return (1);
	return (0);
}

int		is_length(char key)
{
	if (key == 'h' || key == 'l' || key == 'z' || key == 'j')
		return (1);
	return (0);
}

int		is_type(char key)
{
	int		i;
	char	*type;

	i = -1;
	type = "sSpdDioOuUxXcC%";
	while (type[++i])
		if (key == type[i])
			return (1);
	return (0);
}
