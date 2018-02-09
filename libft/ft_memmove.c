/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:51:39 by ozharko           #+#    #+#             */
/*   Updated: 2017/10/31 16:51:43 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_p;
	char	*src_p;

	dst_p = (char *)dst;
	src_p = (char *)src;
	if (src_p < dst_p)
	{
		dst_p += len - 1;
		src_p += len - 1;
		while (len--)
			*dst_p-- = *src_p--;
	}
	else
	{
		while (len--)
			*dst_p++ = *src_p++;
	}
	return (dst);
}
