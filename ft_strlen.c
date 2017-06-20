/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 13:36:37 by adaly             #+#    #+#             */
/*   Updated: 2017/06/10 19:29:48 by adaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(char *str)
{
	size_t total_chars;

	total_chars = 0;
	if (str)
	{
		while (str[total_chars] != '\0')
			total_chars++;
	}
	return (total_chars);
}

uintmax_t	ft_wstrlen(wchar_t *str)
{
	uintmax_t total_chars;

	total_chars = 0;
	if (str)
	{
		while (str[total_chars] != '\0')
			total_chars++;
	}
	return (total_chars);
}
