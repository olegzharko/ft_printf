/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_on_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:59:17 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/11 10:59:19 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*hw_mch_sp(char *result, t_pars *struct_pars, size_t *width)
{
	char		*str;
	size_t		length;
	size_t		key1;

	length = ft_strlen(result);
	key1 = (size_t)ft_atoi(struct_pars->pars_key[1]);
	str = NULL;
	if (length < key1)
	{
		*width = key1 - length;
		if ((struct_pars->flag_plus || struct_pars->flag_space) && *width > 0)
			*width = *width - 1;
	}
	else
		*width = 0;
	str = ft_space(ft_strnew(*width), *width);
	return (str);
}

char	*hw_mch_sp_c(char c, t_pars *struct_pars, size_t *width)
{
	char		*str;
	size_t		key1;
	char		alph;

	alph = c;
	key1 = (size_t)ft_atoi(struct_pars->pars_key[1]);
	str = NULL;
	if (1 < key1)
	{
		*width = key1 - 1;
		if ((struct_pars->flag_plus || struct_pars->flag_space) && *width > 0)
			*width = *width - 1;
	}
	else
		*width = 0;
	str = ft_space(ft_strnew(*width), *width);
	return (str);
}

char	*how_much_spases_utf_c(unsigned int size, t_pars *stc_p, size_t *width)
{
	char		*str;
	size_t		key1;

	key1 = (size_t)ft_atoi(stc_p->pars_key[1]);
	str = NULL;
	if (size < key1)
	{
		*width = key1 - size;
		if ((stc_p->flag_plus || stc_p->flag_space) && *width > 0)
			*width = *width - 1;
	}
	else
		*width = 0;
	str = ft_space(ft_strnew(*width), *width);
	return (str);
}

char	*how_much_spases_x(char *result, t_pars *struct_pars, size_t *width)
{
	char		*str;
	size_t		length;
	size_t		key1;

	length = ft_strlen(result);
	key1 = (size_t)ft_atoi(struct_pars->pars_key[1]);
	if (struct_pars->flag_hash == '#' && result[1] != 'x' && result[1] != 'X')
		length = length + 2;
    if (result[0] == '0' && result[1] == '\0' && struct_pars->precition == 0 && struct_pars->precition_on == 1)
        length = 0;
    else if (result[0] == '0' && result[1] == '\0')
        length = 1;
	str = NULL;
	if (length < key1)
	{
		*width =key1- length;
		if ((struct_pars->flag_plus || struct_pars->flag_space) && *width > 0)
			*width = *width - 1;
	}
	else
		*width = 0;
	str = ft_space(ft_strnew(*width), *width);
	return (str);
}

char	*how_much_spases_o(char *result, t_pars *struct_pars, size_t *width)
{
	char		*str;
	size_t		length;
	size_t		key1;

	length = ft_strlen(result);
	key1 = (size_t)ft_atoi(struct_pars->pars_key[1]);
    if (result[0] == '0' && result[1] == '\0' && struct_pars->precition == 0 && struct_pars->precition_on == 1)
        length = 0;
    else if (result[0] == '0' && result[1] == '\0')
        length = 1;
	str = NULL;
	if (length < key1)
	{
		*width = key1 - length;
		if ((struct_pars->flag_plus || struct_pars->flag_space) && *width > 0)
			*width = *width - 1;
	}
	else
		*width = 0;
	str = ft_space(ft_strnew(*width), *width);
	return (str);
}
