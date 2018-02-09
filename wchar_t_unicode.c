/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar_t_unicode.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 15:07:28 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/01 15:07:32 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	p1(unsigned int v, unsigned char octet)
{
	octet = v;
	write(1, &octet, 1);
}

void	p2(unsigned char *o, unsigned v, unsigned char octet, unsigned *mask)
{
	o[1] = (v << 26) >> 26;
	o[0] = ((v >> 6) << 27) >> 27;
	octet = (mask[1] >> 8) | o[0];
	write(1, &octet, 1);
	octet = ((mask[1] << 24) >> 24) | o[1];
	write(1, &octet, 1);
}

void	p3(unsigned char *o, unsigned v, unsigned char octet, unsigned *mask)
{
	o[2] = (v << 26) >> 26;
	o[1] = ((v >> 6) << 26) >> 26;
	o[0] = ((v >> 12) << 28) >> 28;
	octet = (mask[2] >> 16) | o[0];
	write(1, &octet, 1);
	octet = ((mask[2] << 16) >> 24) | o[1];
	write(1, &octet, 1);
	octet = ((mask[2] << 24) >> 24) | o[2];
	write(1, &octet, 1);
}

void	p4(unsigned char *o, unsigned v, unsigned char octet, unsigned *mask)
{
	o[3] = (v << 26) >> 26;
	o[2] = ((v >> 6) << 26) >> 26;
	o[1] = ((v >> 12) << 26) >> 26;
	o[0] = ((v >> 18) << 29) >> 29;
	octet = (mask[3] >> 24) | o[0];
	write(1, &octet, 1);
	octet = ((mask[3] << 8) >> 24) | o[1];
	write(1, &octet, 1);
	octet = ((mask[3] << 16) >> 24) | o[2];
	write(1, &octet, 1);
	octet = ((mask[3] << 24) >> 24) | o[3];
	write(1, &octet, 1);
}
