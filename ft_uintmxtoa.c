/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintmxtoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 10:38:04 by ozharko           #+#    #+#             */
/*   Updated: 2018/01/18 10:38:06 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_num_len(size_t n)
{
	size_t				i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_uintmxtoa(size_t n)
{
	char				*str;
	size_t				len;
	size_t				ncpy;

	len = ft_num_len(n);
	ncpy = n;
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = ncpy % 10 + '0';
	while (ncpy /= 10)
		str[--len] = ncpy % 10 + '0';
	return (str);
}

int		my_length(intmax_t value, size_t base)
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

char	*ft_itoa_base_ux(intmax_t value, size_t base)
{
	long long int		i;
	char				*num;
	char				*str;
	long long int		length;

	num = "0123456789abcdef";
	length = my_length(value, base);
	str = (char *)malloc(sizeof(char) * (length + 1));
	str[length] = '\0';
	if (value == 0)
		str[0] = '0';
	i = 0;
	while (value)
	{
		length--;
		str[length] = num[value % base];
		value = value / base;
		i++;
	}
	return (str);
}

int		my_length_utf_d(long long int value, int base)
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
char	*ft_itoa_base_ux_utf_d(long long int value, int base)
{
    char				*num;
    char				*str;
    long long int		length;

    num = "0123456789abcdef";
    length = my_length_utf_d(value, base);
    str = (char *)malloc(sizeof(char) * (length + 1));
    str[length] = '\0';

    if (value == 0)
    {
        str[0] = '0';
        return (str);
    }

	if (value < 0)
		value = value * (-1);
    while (value)
    {
        length--;
        str[length] = num[value % base];
        value = value / base;
    }
	if (length)
		str[--length] = '-';
    return (str);
}

char	*ft_itoa_base_ux_size_t(unsigned int value, unsigned int base)
{
	long long int		i;
	char				*num;
	char				*str;
	long long int		length;

	num = "0123456789abcdef";
	length = my_length(value, base);
	str = (char *)malloc(sizeof(char) * (length + 1));
	ft_bzero(str, length);
	str[length] = '\0';
	if (value == 0)
		str[0] = '0';
	i = 0;
	while (value)
	{
		length--;
		str[length] = num[value % base];
		value = value / base;
		i++;
	}
	return (str);
}
