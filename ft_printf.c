/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 14:36:45 by ozharko           #+#    #+#             */
/*   Updated: 2017/12/29 14:36:48 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	free_struct(t_pars *struct_pars)
{
	free(struct_pars->pars_key[0]);
	free(struct_pars->pars_key[1]);
	free(struct_pars->pars_key[2]);
	free(struct_pars->pars_key[3]);
	free(struct_pars->pars_key[4]);
	free(struct_pars->pars_key[5]);
	free(struct_pars->pars_key);
	free(struct_pars->zero_small_x);
	free(struct_pars->zero_big_x);
	free(struct_pars->tern_key);
	free(struct_pars);
}

void	decoding_type(char *k, va_list ap, t_pars *stc, int *length)
{
	size_t		i;
	int			start;
	int			key_len;

	key_len = ft_strlen(k);
	i = -1;
	start = 0;
	stc = (t_pars *)malloc(sizeof(t_pars));
	pars_key_alloc_zero(stc, key_len);
	while (++i < ft_strlen(k))
	{
		if (stc->tern_key[0] && is_flags(k[i]))
			i = fun_pars_key_flags(k, i, stc);
		if (stc->tern_key[1] && k[i] != '0' && (is_width(k[i]) || k[i] == '*'))
			i = fun_pars_key_width(k, i, stc, ap);
		if (stc->tern_key[2] && k[i] == '.')
			i = fun_pars_key_pr(k, i, stc, ap);
		if (stc->tern_key[3] && is_length(k[i]))
			i = fun_pars_key_length(k, i, stc);
		if (is_type(k[i]))
			fun_pars_key_type(k, i, stc);
	}
	choose_type_of_arg(stc, ap, length);
	if (stc != NULL)
		free_struct(stc);
}

char	*cut_from_per_to_type(char *str, size_t *i)
{
	char	*type;
	char	*key;
	size_t	min;
	size_t	length;
	int		flag;

	flag = 1;
	type = "sSpdDioOuUxXcC%";
	while (*type != 0)
	{
		if ((key = ft_strchr(&str[*i], *type)) != 0)
		{
			length = key - &str[*i];
			if (flag == 1)
			{
				min = length;
				flag = 0;
			}
			min = length <= min ? length : min;
		}
		type++;
	}
	key = flag == 0 ? ft_strsub(&str[*i], 0, min + 1) : key;
	*i = flag == 0 ? (*i + min + 1) : *i;
	return (key);
}

int		ft_write_to_chr(char *str, char c, size_t i, int *length)
{
	while (str[i] != c && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		*length += 1;
	}
	i++;
	return (i);
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_pars		*struct_pars;
	size_t		i;
	int			length;
	char		*key;

	length = 0;
	struct_pars = NULL;
	i = 0;
	va_start(ap, format);
	while ((i = ft_write_to_chr((char *)format, '%', i, &length)))
	{
		if (format[--i] == '\0')
			return (length);
		i++;
		key = cut_from_per_to_type((char *)format, &i);
		if (key != NULL)
		{
				decoding_type(key, ap, struct_pars, &length);
			free(key);
		}
	}
	va_end(ap);
	return (0);
}
