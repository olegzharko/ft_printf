/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 07:45:57 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/30 09:21:54 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	my_length(int value, int base)
{
	int		i;

	i = 0;
	if (value < 0 && base == 10)
		i++;
	while (value)
	{
		value = value / base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base(int value, int base)
{
	int		i;
	char	*num;
	char	*str;
	int		length;

	num = "0123456789ABCDEF";
	length = my_length(value, base);
	if (value < 0 && base == 10)
		value = value * (-1);
	str = (char *)malloc(sizeof(char) * (length + 1));
	str[length] = '\0';
	i = 0;
	while (value)
	{
		length--;
		str[length] = num[value % base];
		value = value / base;
		i++;
	}
	if (length != 0)
		str[--length] = '-';
	return (str);
}
