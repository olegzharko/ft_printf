/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_to_pars_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:36:24 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/10 12:36:26 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	free_fun_pars_key_width(t_pars *strct)
{
	if (strct->pars_key[1] != NULL)
		free(strct->pars_key[1]);
}

int		fun_pars_key_width(char *key, int start, t_pars *strct, va_list ap)
{
	int		i;
	int		num;

	i = start;
	ft_bzero(strct->tern_key, 1);
	if (key[i] == '*' && (key[i + 1] == '.' || ft_isalpha(key[i + 1])))
	{
		num = va_arg(ap, int);
		if (num < 0)
		{
			num = num * (-1);
			strct->flag_minus = '-';
		}
		free_fun_pars_key_width(strct);
		strct->pars_key[1] = ft_itoa(num);
		i++;
	}
	else
	{
		while (is_width(key[i]))
			i++;
		free_fun_pars_key_width(strct);
		strct->pars_key[1] = ft_strsub(key, start, i - start);
	}
	return (i);
}

void	free_fun_pars_key_precition(t_pars *strct)
{
	if (strct->pars_key[2] != NULL)
		free(strct->pars_key[2]);
}

int		fun_pars_key_pr(char *key, int start, t_pars *strct, va_list ap)
{
	int		i;
	int		num;

	i = start;
	ft_bzero(strct->tern_key, 2);
	strct->precition_on = 1;
	start = i + 1;
	i = key[i] == '.' ? (i + 1) : i;
	if (key[i] == '*' && ft_isalpha(key[i + 1]))
	{
		num = va_arg(ap, int);
		free_fun_pars_key_precition(strct);
		strct->pars_key[2] = ft_itoa(num);
		i++;
	}
	else
	{
		while (is_precition(key[i]))
			i++;
		free_fun_pars_key_precition(strct);
		strct->pars_key[2] = ft_strsub(key, start, i - start);
	}
	strct->precition = ft_atoi(strct->pars_key[2]);
	return (i);
}

int		fun_pars_key_length(char *key, int start, t_pars *struct_pars)
{
	int		i;
	char	*str;

	i = start;
	ft_bzero(struct_pars->tern_key, 3);
	while (is_length(key[i]))
		i++;
	if ((i - start) >= 3)
		exit(-1);
	str = ft_strsub(key, start, i - start);
	if (str[0] == 'l' && str[1] == 'l')
		struct_pars->ll = 1;
	if (str[0] == 'l' && str[1] != 'l')
		struct_pars->l = 1;
	if (str[0] == 'h' && str[1] == 'h')
		struct_pars->hh = 1;
	if (str[0] == 'h' && str[1] != 'h')
		struct_pars->h = 1;
	if (str[0] == 'j')
		struct_pars->j = 1;
	if (str[0] == 'z')
		struct_pars->z = 1;
	if (str != NULL)
		free(str);
	return (i);
}
