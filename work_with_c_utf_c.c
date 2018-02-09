/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_c_utf_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 09:18:14 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/06 09:18:17 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	prnt_wwarg_c(t_pars *stc_p, int *len, wchar_t c)
{
	unsigned int	size;

	size = 1;
	if (stc_p->flag_minus == '-' && stc_p->width > 0)
	{
		ft_putchar(c);
		ft_putstr_count(stc_p->str, len);
	}
	else if (stc_p->width != 0 && c != 0)
	{
		ft_putstr_count(stc_p->str, len);
		test_wchar_fun(c, size);
	}
	else if (stc_p->width != 0 && c == 0)
		ft_putstr_count(stc_p->str, len);
	else if (c != 0)
		test_wchar_fun(c, size);
}

void	work_with_arg_c(t_pars *stc_p, va_list ap, int *length)
{
	size_t			width;
	char			*str;
	wchar_t			c;

	if (stc_p->l > 0)
	{
		work_with_arg_utf_c(stc_p, ap, length);
		return ;
	}
	width = 0;
	c = va_arg(ap, unsigned int);
	str = ft_atoi(stc_p->pars_key[1]) != 0 ? hw_mch_sp_c(c, stc_p, &width) : "";
	stc_p->width = width;
	stc_p->str = str;
	prnt_wwarg_c(stc_p, length, c);
	if (c == 0 && stc_p->flag_minus == 0 && width == 0 && str[0] == '\0' &&
		stc_p->pars_key[1][0] == 0)
		ft_putchar(0);
	else if (c == 0 && stc_p->flag_minus != '-')
		ft_putchar(0);
	*length += 1;
	if (str[0] != '\0')
		free(str);
}

void	prnt_utf_c(t_pars *stc_p, wchar_t c, size_t size, int *len)
{
	if (stc_p->flag_minus == '-' && stc_p->width > 0)
	{
		if (c != 0)
			test_wchar_fun(c, size);
		ft_putstr_count(stc_p->str, len);
	}
	else if (stc_p->width != 0 && c != 0)
	{
		ft_putstr_count(stc_p->str, len);
		test_wchar_fun(c, size);
	}
	else if (stc_p->width != 0 && c == 0)
		ft_putstr_count(stc_p->str, len);
	else if (c != 0)
		test_wchar_fun(c, size);
}

int		size_work_with_arg_utf_c(wchar_t c)
{
	unsigned int	size;
	unsigned int	value;

	value = (unsigned int)c;
	size = ft_count_bits(value);
	if (size <= 7)
		size = 1;
	else if (size <= 11)
		size = 2;
	else if (size <= 16)
		size = 3;
	else
		size = 4;
	return (size);
}

void	work_with_arg_utf_c(t_pars *struct_pars, va_list ap, int *length)
{
	size_t			width;
	char			*str;
	wchar_t			c;
	unsigned int	size;

	width = 0;
	c = va_arg(ap, wchar_t);
	size = size_work_with_arg_utf_c(c);
	str = "";
	if (ft_atoi(struct_pars->pars_key[1]) != 0)
		str = how_much_spases_utf_c(size, struct_pars, &width);
	struct_pars->width = width;
	struct_pars->str = str;
	prnt_utf_c(struct_pars, c, size, length);
	*length = c != 0 ? (*length + size) : *length;
	if ((c == 0 && struct_pars->flag_minus == 0 && width == 0 &&
		str[0] == '\0' && struct_pars->pars_key[1][0] == 0) || c == 0)
		ft_putchar(0);
	*length = c == 0 ? (*length + 1) : *length;
	if (str[0] != '\0')
		free(str);
}
