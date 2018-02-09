/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:16:10 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/02 13:16:12 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrchr(const char *s, int c)
{
	char	*flag;

	flag = 0;
	while (*s)
	{
		if (*s == (char)c)
			flag = (char *)s;
		s++;
	}
	if (flag > 0)
		return (flag);
	if ((char)c == 0)
		return ((char *)s);
	return (0);
}
