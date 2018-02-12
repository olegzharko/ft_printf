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

void	p1(t_pars *stc_p)
{
	stc_p->octet = stc_p->v;
	write(1, &stc_p->octet, 1);
}

void	p2(t_pars *stc_p)
{
	int		i;

	i = 0;
	stc_p->o[1] = (stc_p->v << 26) >> 26;
	stc_p->o[0] = ((stc_p->v >> 6) << 27) >> 27;
	while (i < 2)
	{
		if (i == 0)
			stc_p->octet = (stc_p->mask[1] >> 8) | stc_p->o[0];
		else if (i == 1)
			stc_p->octet = ((stc_p->mask[1] << 24) >> 24) | stc_p->o[1];
		write(1, &stc_p->octet, 1);
		i++;
	}
}

void	p3(t_pars *stc_p)
{
	int		i;

	i = 0;
	stc_p->o[2] = (stc_p->v << 26) >> 26;
	stc_p->o[1] = ((stc_p->v >> 6) << 26) >> 26;
	stc_p->o[0] = ((stc_p->v >> 12) << 28) >> 28;
	while (i < 3)
	{
		if (i == 0)
			stc_p->octet = (stc_p->mask[2] >> 16) | stc_p->o[0];
		else if (i == 1)
			stc_p->octet = ((stc_p->mask[2] << 16) >> 24) | stc_p->o[1];
		else if (i == 2)
			stc_p->octet = ((stc_p->mask[2] << 24) >> 24) | stc_p->o[2];
		write(1, &stc_p->octet, 1);
		i++;
	}
}

void	p4(t_pars *stc_p)
{
	int		i;

	i = 0;
	stc_p->o[3] = (stc_p->v << 26) >> 26;
	stc_p->o[2] = ((stc_p->v >> 6) << 26) >> 26;
	stc_p->o[1] = ((stc_p->v >> 12) << 26) >> 26;
	stc_p->o[0] = ((stc_p->v >> 18) << 29) >> 29;
	while (i < 4)
	{
		if (i == 0)
			stc_p->octet = (stc_p->mask[3] >> 24) | stc_p->o[i];
		else if (i == 1)
			stc_p->octet = ((stc_p->mask[3] << 8) >> 24) | stc_p->o[i];
		else if (i == 2)
			stc_p->octet = ((stc_p->mask[3] << 16) >> 24) | stc_p->o[i];
		else if (i == 3)
			stc_p->octet = ((stc_p->mask[3] << 24) >> 24) | stc_p->o[i];
		write(1, &stc_p->octet, 1);
		i++;
	}
}
