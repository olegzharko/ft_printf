/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_d_utf_d_u_s.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 09:16:41 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/06 09:16:43 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*change_for_minus(char *result, t_pars *stc_p)
{
	int		i;

	i = 0;
	if (ft_isdigit(result[0]) && result[0] == '0' && stc_p->precition == 0 &&
		stc_p->flag_minus == 0 && stc_p->flag_plus == 0)
		result[0] = '-';
	else if (ft_isdigit(result[0]))
	{
		while (result[i + 1] != '\0')
			i++;
		if (stc_p->flag_plus || stc_p->flag_space)
			i++;
		if (!ft_isdigit(result[i]))
			result[i] = '\0';
		result = str2_free_str1("-", result);
	}
	else
	{
		while (!(ft_isdigit(result[i + 1])))
			i++;
		result[i] = '-';
	}
	return (result);
}

void	work_with_arg_d(t_pars *struct_pars, va_list ap, int *length)
{
	size_t			width;
	char			*str;
	char			*result;

	result = type_of_int(struct_pars, ap);
	if (struct_pars->precition)
		result = ft_add_prec(result, struct_pars);
	str = hw_mch_sp(result, struct_pars, &width);
	if (struct_pars->flag_minus)
		result = str1_free_str2(result, str);
	else if (struct_pars->flag_zero && struct_pars->precition == 0)
		result = str2_free_str1(ft_num_zero(str), result);
	if (struct_pars->flag_plus && struct_pars->minus == 0)
		result = str2_free_str1("+", result);
	else if (struct_pars->flag_space)
		result = str2_free_str1(" ", result);
	if (width != 0 && struct_pars->flag_minus == 0 && str[0] != '0')
		result = str2_free_str1(str, result);
	if (struct_pars->minus)
		result = change_for_minus(result, struct_pars);
	ft_putstr_count(result, length);
	free_work_with_arg(result, str);
}

void	work_with_arg_utf_d(t_pars *struct_pars, va_list ap, int *length)
{
	size_t			width;
	char			*str;
	char			*result;

	result = type_of_unsigned_int(ap, struct_pars);
	if (struct_pars->precition)
		result = ft_add_prec(result, struct_pars);
	str = hw_mch_sp(result, struct_pars, &width);
	if (struct_pars->flag_minus)
		result = str1_free_str2(result, str);
	else if (struct_pars->flag_zero && struct_pars->precition == 0)
		result = str2_free_str1(ft_num_zero(str), result);
	if (struct_pars->flag_plus && struct_pars->minus == 0)
		result = str2_free_str1("+", result);
	else if (struct_pars->flag_space)
		result = str2_free_str1(" ", result);
	if (width != 0 && struct_pars->flag_minus == 0 && str[0] != '0')
		result = str2_free_str1(str, result);
	if (struct_pars->minus)
		result = change_for_minus(result, struct_pars);
	ft_putstr_count(result, length);
	free_work_with_arg(result, str);
}

void	work_with_arg_u(t_pars *struct_pars, va_list ap, int *length)
{
	size_t			width;
	char			*str;
	char			*result;

	result = type_of_unsigned_int_u(ap, struct_pars);
	if (result[0] == '0' && struct_pars->precition_on == 1 &&
		struct_pars->precition == 0)
		result[0] = '\0';
	if (struct_pars->precition)
		result = ft_add_prec(result, struct_pars);
	str = hw_mch_sp(result, struct_pars, &width);
	if (struct_pars->flag_minus)
		result = str1_free_str2(result, str);
	else if (struct_pars->flag_zero && struct_pars->precition == 0)
		result = str2_free_str1(ft_num_zero(str), result);
	else if (width != 0)
		result = str2_free_str1(str, result);
	if (struct_pars->minus)
		result = change_for_minus(result, struct_pars);
	ft_putstr_count(result, length);
	free_work_with_arg(result, str);
}

void	work_with_arg_s(t_pars *stc_p, va_list ap, int *length)
{
	size_t		width;
	char		*res;
	char		*str;

	if (stc_p->l > 0)
	{
		work_with_arg_utf_s(stc_p, ap, length);
		return ;
	}
	res = va_arg(ap, char *);
	res = res == NULL ? ft_strdup("(null)") : ft_strdup(res);
	res = stc_p->precition != 0 ? ft_add_prec_s(res, stc_p) : res;
	res = (stc_p->precition == 0 && stc_p->precition_on == 1) ?
	ft_strdup_free(res, "") : res;
	str = ft_atoi(stc_p->pars_key[1]) != 0 ?
	hw_mch_sp(res, stc_p, &width) : ft_strdup("");
	if (stc_p->flag_minus == '-' && width > 0)
		res = str1_free_str2(res, str);
	else if (width != 0 && res[0] != '\0')
		res = str2_free_str1(str, res);
	else if (width != 0 && res[0] == '\0')
		res = ft_strdup_free(res, str);
	ft_putstr_count(res, length);
	free_work_with_arg_s(str, res);
}
