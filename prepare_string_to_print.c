/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_string_to_print.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 08:17:17 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/11 08:17:21 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	pars_key_alloc_zero_short(t_pars *struct_pars)
{
	struct_pars->precition_on = 0;
	struct_pars->flag_minus = 0;
	struct_pars->flag_space = 0;
	struct_pars->flag_hash = 0;
	struct_pars->flag_zero = 0;
	struct_pars->flag_plus = 0;
	struct_pars->precition = 0;
	struct_pars->counter = 0;
	struct_pars->width = 0;
	struct_pars->minus = 0;
	struct_pars->ll = 0;
	struct_pars->hh = 0;
	struct_pars->l = 0;
	struct_pars->h = 0;
	struct_pars->j = 0;
	struct_pars->z = 0;
	struct_pars->str = 0;
	struct_pars->dont_print = 0;
	struct_pars->v = 0;
	struct_pars->octet = 0;
}

void	pars_key_alloc_zero(t_pars *struct_pars, size_t len)
{
	int			i;
	int			wid;

	wid = len;
	i = -1;
	struct_pars->pars_key = (char **)malloc(sizeof(char *) * 6);
	struct_pars->zero_small_x = ft_strnew(2);
	struct_pars->zero_small_x[0] = '0';
	struct_pars->zero_small_x[1] = 'x';
	struct_pars->zero_big_x = ft_strnew(2);
	struct_pars->zero_big_x[0] = '0';
	struct_pars->zero_big_x[1] = 'X';
	pars_key_alloc_zero_short(struct_pars);
	while (++i < 5)
		struct_pars->pars_key[i] = (char *)malloc(sizeof(char) * 1);
	struct_pars->pars_key[i] = NULL;
	i = -1;
	struct_pars->tern_key = (char *)malloc(sizeof(char) * 5);
	while (i < 4)
		struct_pars->tern_key[++i] = '1';
	struct_pars->tern_key[4] = '\0';
}

int		check_valid_flags(t_pars *struct_pars)
{
	int		i;

	i = 0;
	if (struct_pars->flag_minus != 0)
		i++;
	if (struct_pars->flag_zero != 0)
		i++;
	if (struct_pars->flag_plus != 0)
		i++;
	if (struct_pars->flag_space != 0)
		i++;
	return (i);
}

void	ft_putchar_count(char c, int *length)
{
	write(1, &c, 1);
	*length += 1;
}

void	ft_putstr_count(char *s, int *length)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		ft_putchar_count(s[i++], length);
}
