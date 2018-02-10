/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_some_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:04:40 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/10 12:04:41 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_space(char *space, size_t length)
{
	size_t		i;

	i = 0;
	while (i < length)
	{
		space[i] = ' ';
		i++;
	}
	return (space);
}

char		*ft_num_zero(char *str)
{
	size_t		i;

	i = 0;
	while (i < ft_strlen(str))
	{
		str[i] = '0';
		i++;
	}
	return (str);
}

wchar_t		*ft_space_wchar_t(wchar_t *space, size_t length)
{
	size_t		i;

	i = 0;
	while (i < length)
	{
		space[i] = L' ';
		i++;
	}
	return (space);
}

char		*ft_add_prec(char *result, t_pars *struct_pars)
{
	char	*tmp;
	char	*res;
	int		num;
	size_t	i;
	size_t	length;

	i = -1;
	tmp = NULL;
	length = ft_strlen(result);
	num = struct_pars->precition - length;
	if (num > 0)
	{
		length = struct_pars->precition - length;
		tmp = ft_strnew(length);
		while (++i < length)
			tmp[i] = '0';
		res = ft_strjoin(tmp, result);
		free(result);
		free(tmp);
	}
	else
		return (result);
	return (res);
}

char		*ft_add_prec_s(char *result, t_pars *struct_pars)
{
	int		num;
	size_t	length;
	char	*tmp;

	length = ft_strlen(result);
	if (struct_pars->precition > length)
		num = length;
	else
		num = struct_pars->precition;
	if (num > 0)
	{
		tmp = result;
		result = ft_strsub(tmp, 0, num);
		free(tmp);
	}
	if (result == NULL)
		result = ft_strdup("");
	return (result);
}
