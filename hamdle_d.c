/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hamdle_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:50:42 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/15 15:50:44 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char				*type_of_int(t_pars *stc, va_list ap)
{
	intmax_t		value;
	char			*result;

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
	stc->minus = value < 0 ? 1 : 0;
	value = value < 0 ? ((-1) * value) : value;
	result = ft_itoa_base_ux(value, 10);
	if (result[0] == '0' && stc->flag_plus == 0 && stc->z == 0 && stc->h == 0 && stc->hh == 0 && stc->l == 0 && stc->ll == 0 && stc->j == 0 && stc->z == 0 && stc->flag_minus == 0 && stc->precition == 0 && stc->precition_on != 1)
		result[0] = '0';
    else if (stc->precition == 0 && stc->precition_on == 1 && result[0] == '0')
        result[0] = '\0';
	return (result);
}

char				*type_of_unsigned_int(va_list ap, t_pars *struct_pars)
{
    intmax_t		value;
    char			*result;

    if (struct_pars->l)
        value = va_arg(ap, size_t);
    else if (struct_pars->ll)
        value = va_arg(ap, long long int);
    else if (struct_pars->j)
        value = va_arg(ap, size_t);
    else if (struct_pars->h)
        value = (unsigned short)va_arg(ap, int);
    else
        value = va_arg(ap, long long int);
    result = ft_itoa_base_ux_utf_d(value, 10);

	return (result);
}

char				*type_of_unsigned_int_u(va_list ap, t_pars *struct_pars)
{
	char			*result;
	char			cmp;
	intmax_t		value;

	value = 0;
	result = NULL;
	cmp = struct_pars->pars_key[4][0];
	if (struct_pars->hh && cmp == 'u')
		value = (unsigned char)va_arg(ap, int);
	else if ((struct_pars->hh && cmp == 'U') || (struct_pars->h && cmp == 'u'))
		value = (unsigned short)va_arg(ap, int);
	else if ((struct_pars->h && cmp == 'U') || cmp == 'U' || struct_pars->l
		|| struct_pars->z)
		value = va_arg(ap, unsigned long);
	else if (struct_pars->ll || struct_pars->j)
		value = va_arg(ap, unsigned long long);
	else if (struct_pars->j && cmp == 'U')
		value = (short int)va_arg(ap, int);
	else
		value = (va_arg(ap, unsigned int));
	result = ft_itoa_base_ux(value, 10);
	return (result);
}

char				*type_of_base_o(t_pars *struct_pars, va_list ap)
{
	char			*result;
	char			cmp;

	result = NULL;
	cmp = struct_pars->pars_key[4][0];
	if (struct_pars->hh && cmp == 'o')
		result = ft_itoa_base_ux_size_t((unsigned char)va_arg(ap, int), 8);
	else if ((struct_pars->hh && cmp == 'O') || struct_pars->h)
		result = ft_itoa_base_ux_size_t((unsigned short)va_arg(ap, int), 8);
	else if (struct_pars->ll || struct_pars->j)
		result = ft_itoa_base_ux(va_arg(ap, unsigned long long), 8);
	else if (struct_pars->l || struct_pars->z)
		result = ft_itoa_base_ux(va_arg(ap, unsigned long), 8);
	else if (cmp == 'o')
		result = ft_itoa_base_ux(va_arg(ap, unsigned int), 8);
	else
		result = ft_itoa_base_ux(va_arg(ap, size_t), 8);
	return (result);
}

char				*type_of_base_x(t_pars *struct_pars, va_list ap)
{
	char			*result;
	char			cmp;
	size_t			i;

	i = -1;
	result = NULL;
	cmp = struct_pars->pars_key[4][0];
	if (struct_pars->hh)
		result = ft_itoa_base_ux((unsigned char)va_arg(ap, int), 16);
	else if (struct_pars->h)
		result = ft_itoa_base_ux((unsigned short)va_arg(ap, int), 16);
	else if (struct_pars->ll || struct_pars->j)
		result = ft_itoa_base_ux(va_arg(ap, unsigned long long), 16);
	else if (struct_pars->l || struct_pars->z)
		result = ft_itoa_base_ux(va_arg(ap, unsigned long), 16);
	else if (cmp == 'p')
		result = ft_itoa_base_ux(va_arg(ap, uintmax_t), 16);
	else
		result = ft_itoa_base_ux_size_t(va_arg(ap, int), 16);
	if (cmp == 'X')
		while (++i < ft_strlen(result))
			result[i] = ft_toupper(result[i]);
	return (result);
}
