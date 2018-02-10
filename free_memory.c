/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 09:13:37 by ozharko           #+#    #+#             */
/*   Updated: 2018/02/06 09:13:43 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	free_work_with_arg(char *result, char *str)
{
	if (result != NULL)
		free(result);
	if (str != NULL)
		free(str);
}

void	free_work_with_arg_utf_s(wchar_t *str, wchar_t *result)
{
	if (str != NULL)
		free(str);
	if (result != NULL)
		free(result);
}

void	free_work_with_arg_s(char *str, char *result)
{
	if (str[0] != '\0' || str != NULL)
		free(str);
	if (result != NULL)
		free(result);
}

char	*str1_free_str2(char *result, char *str)
{
	char	*tmp;

	tmp = result;
	result = ft_strjoin(tmp, str);
	free(tmp);
	return (result);
}

char	*str2_free_str1(char *str, char *result)
{
	char	*tmp;

	tmp = result;
	result = ft_strjoin(str, tmp);
	free(tmp);
	return (result);
}
