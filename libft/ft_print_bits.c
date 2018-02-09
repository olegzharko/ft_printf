/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:16:44 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/13 19:16:45 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(unsigned char bit)
{
	int	oct;
	int	div;

	div = 128;
	oct = bit;
	while (div != 0)
	{
		if (div <= oct)
		{
			ft_putchar('1');
			oct = oct % div;
		}
		else
			ft_putchar('0');
		div = div / 2;
	}
}
