/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:19:18 by ozharko           #+#    #+#             */
/*   Updated: 2017/11/01 14:19:21 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *des, const char *app)
{
	int		i;
	char	*start;

	start = des;
	i = 0;
	while (*des)
		des++;
	while (*app)
	{
		*des = *app;
		des++;
		app++;
	}
	*des = '\0';
	return (start);
}
