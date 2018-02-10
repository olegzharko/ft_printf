/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 21:07:56 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/09 21:07:58 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				my_length(intmax_t value, size_t base)
{
	long long int		i;

	i = 0;
	if (value == 0)
		return (1);
	while (value)
	{
		value = value / base;
		i++;
	}
	return (i);
}

int				my_length_utf_d(long long int value, int base)
{
	long long int		i;

	i = 0;
	if (value == 0)
		return (1);
	if (value < 0)
	{
		i++;
	}
	while (value)
	{
		value = value / base;
		i++;
	}
	return (i);
}

intmax_t		ch_val_of_int(t_pars *stc, va_list ap)
{
	intmax_t		value;

	value = 0;
	if (stc->l)
		value = va_arg(ap, long int);
	else if (stc->ll)
		value = va_arg(ap, long long int);
	else if (stc->j)
		value = va_arg(ap, intmax_t);
	else if (stc->z)
		value = va_arg(ap, ssize_t);
	else if (stc->h)
		value = (short int)va_arg(ap, int);
	else if (stc->hh)
		value = (signed char)va_arg(ap, int);
	else
		value = va_arg(ap, int);
	return (value);
}

char			*find_value_1(char *result, t_pars *stc, char *str)
{
	char		*tmp;
	size_t		width;

	width = 0;
	tmp = result;
	if (result[0] == '0' && result[0] == '\0')
		result = ft_strdup(str);
	else
		result = ft_strjoin(str, tmp);
	free(tmp);
	if (str[0] != '0' && str[1] != 'x' && str[2] != '\0')
		free(str);
	str = how_much_spases_x(result, stc, &width);
	tmp = result;
	if (stc->flag_minus == 0)
		result = ft_strjoin(str, tmp);
	else if (stc->flag_minus == '-')
		result = ft_strjoin(tmp, str);
	free(tmp);
	if (str != NULL)
		free(str);
	return (result);
}

char			*find_value_2(char *result, t_pars *stc, char *str)
{
	char		*tmp;
	size_t		width;

	width = 0;
	tmp = result;
	if (result[0] == '0' && result[0] == '\0')
		result = ft_strdup(str);
	else
		result = ft_strjoin(str, tmp);
	free(tmp);
	if (str[0] != '0' && str[1] != 'x' && str[2] != '\0')
		free(str);
	str = how_much_spases_x(result, stc, &width);
	tmp = result;
	if (stc->flag_minus == 0)
		result = ft_strjoin(str, tmp);
	else if (stc->flag_minus == 1)
		result = ft_strjoin(tmp, str);
	free(tmp);
	if (str != NULL)
		free(str);
	return (result);
}
