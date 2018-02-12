/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_type_of_arg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:53:48 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/10 15:53:51 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	choose_int(t_pars *struct_pars, va_list ap, int *lenght)
{
	char	cmp;

	cmp = struct_pars->pars_key[4][0];
	if (cmp == 'd' || cmp == 'i')
		work_with_arg_d(struct_pars, ap, lenght);
	if (cmp == 'D')
		work_with_arg_utf_d(struct_pars, ap, lenght);
	if (cmp == 'x' || cmp == 'X')
		work_with_arg_x(struct_pars, ap, lenght);
	if (cmp == 'u' || cmp == 'U')
		work_with_arg_u(struct_pars, ap, lenght);
	if (cmp == 'o' || cmp == 'O')
		work_with_arg_o(struct_pars, ap, lenght);
}

void	chose_char(t_pars *struct_pars, va_list ap, int *lenght)
{
	char	cmp;

	cmp = struct_pars->pars_key[4][0];
	if ((cmp == 's' || cmp == 'S') && MB_CUR_MAX == 1)
		work_with_arg_s(struct_pars, ap, lenght);
	if (cmp == 'S')
		work_with_arg_utf_s(struct_pars, ap, lenght);
	if ((cmp == 'c' || cmp == 'C') && MB_CUR_MAX == 1)
		work_with_arg_c(struct_pars, ap, lenght);
	if (cmp == 'C')
		work_with_arg_utf_c(struct_pars, ap, lenght);
	if (cmp == 'p')
		work_with_arg_p(struct_pars, ap, lenght);
	if (cmp == '%')
		work_with_arg_percent(struct_pars, lenght);
}

void	choose_type_of_arg(t_pars *struct_pars, va_list ap, int *lenght)
{
	char	cmp;
	size_t	i;

	i = 0;
	cmp = struct_pars->pars_key[4][0];
	if (cmp == 'd' || cmp == 'i' || cmp == 'D' || cmp == 'x' || cmp == 'X')
		choose_int(struct_pars, ap, lenght);
	if (cmp == 'u' || cmp == 'U' || cmp == 'o' || cmp == 'O')
		choose_int(struct_pars, ap, lenght);
	if (cmp == 's' || cmp == 'S' || cmp == 'c' ||
		cmp == 'C' || cmp == 'p' || cmp == '%')
		chose_char(struct_pars, ap, lenght);
}

int		fun_pars_key_flags(char *key, int start, t_pars *struct_pars)
{
	int		i;

	i = start;
	while (is_flags(key[i]))
	{
		if (key[i] == '#')
			struct_pars->flag_hash = '#';
		else if (key[i] == '-')
			struct_pars->flag_minus = '-';
		else if (key[i] == '0')
			struct_pars->flag_zero = '0';
		else if (key[i] == '+')
			struct_pars->flag_plus = '+';
		else if (key[i] == ' ')
			struct_pars->flag_space = ' ';
		i++;
	}
	return (i);
}

void	fun_pars_key_type(char *key, int start, t_pars *struct_pars)
{
	if (struct_pars->pars_key[4] != NULL)
		free(struct_pars->pars_key[4]);
	struct_pars->pars_key[4] = ft_strsub(key, start, 1);
}
