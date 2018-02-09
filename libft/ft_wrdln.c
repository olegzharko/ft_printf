/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:17:05 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/13 19:17:09 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_wrdln(char *str, int index, char c)
{
	int	count;

	count = 0;
	if (str)
	{
		while (str[index] != c && str[index])
		{
			count++;
			index++;
		}
	}
	return (count);
}
