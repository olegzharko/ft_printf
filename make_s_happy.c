/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_s_happy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 20:30:17 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/10 20:30:18 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

wchar_t		*invisible_str(wchar_t *r)
{
	wchar_t			*tmp;

	tmp = r;
	r = ft_strdup_wchar_t(L"");
	free(tmp);
	return (r);
}

char		*ft_strdup_free(char *res, char *str)
{
	char	*tmp;

	tmp = 0;
	if (res != NULL || res[0] == '\0')
		tmp = res;
	res = ft_strdup(str);
	if (tmp != NULL || tmp[0] == '\0')
		free(tmp);
	return (res);
}
