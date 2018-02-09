/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_wchar_s.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 09:25:33 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/06 09:25:36 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

wchar_t	*str1_free_str2_utf(wchar_t *result, wchar_t *str)
{
    wchar_t	*tmp;

    tmp = result;
    result = ft_strjoin_wchar_t(tmp, str);
    free(tmp);
    return (result);
}

wchar_t	*str2_free_str1_utf(wchar_t *str, wchar_t *result)
{
    wchar_t	*tmp;

    tmp = result;
    result = ft_strjoin_wchar_t(str, tmp);
    free(tmp);
    return (result);
}

void	counter_width_wchar(wchar_t *result, unsigned int *size)
{
    int				i;
    int				counter;
    unsigned int	value;

    counter = 0;
    i = 0;
    while (result[i])
    {
        value = (unsigned int)result[i];
        *size = ft_count_bits(value);
        if (*size <= 7)
            *size = 1;
        else if (*size <= 11)
            *size = 2;
        else if (*size <= 16)
            *size = 3;
        else
            *size = 4;
        i++;
    }
}

void	test_count_len(wchar_t *result, unsigned int size, int *length)
{
    int				i;
    int				counter;
    unsigned int	value;

    i = 0;
    counter = 0;
    while (result[i])
    {
        value = (unsigned int)result[i];
        size = ft_count_bits(value);
        if (size <= 7)
            size = 1;
        else if (size <= 11)
            size = 2;
        else if (size <= 16)
            size = 3;
        else
            size = 4;
        test_wchar_fun(result[i], size);
        i++;
        counter += size;
    }
    *length += counter;
}


void	work_with_arg_utf_s(t_pars *stc_p, va_list ap, int *length)
{
    size_t			w;
    wchar_t			*r;
    wchar_t			*s;
    unsigned int	sz;

    if ((r = va_arg(ap, wchar_t *)) == NULL)
        r = ft_strdup_wchar_t(L"(null)");
    else
        r = ft_strdup_wchar_t(r);
    counter_width_wchar(r, &sz);
    r = stc_p->precition != 0 ? ft_add_prec_s_wchar_t(r, stc_p) : r;
    if (stc_p->precition == 0 && stc_p->precition_on == 1)
        r = L"";
    s = ft_atoi(stc_p->pars_key[1]) != 0 ? sp_utf_s(r, stc_p, &w, sz) : L"";
    if (stc_p->flag_minus == '-' && w > 0)
        r = str1_free_str2_utf(r, s);
    else if (w != 0 && r[0] != '\0')
        r = str2_free_str1_utf(s, r);
    else if (w != 0 && r[0] == '\0')
        r = ft_strdup_wchar_t(s);
    test_count_len(r, sz, length);
    free_work_with_arg_utf_s(s, r);
}
