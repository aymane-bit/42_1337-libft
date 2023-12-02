/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:32:27 by akajjou           #+#    #+#             */
/*   Updated: 2023/11/29 20:32:56 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i] && i < len)
	{
		j = 0;
		while (str1[i + j] == str2[j] && str2[j] && i + j < len)
		{
			j++;
		}
		if (!str2[j])
		{
			return ((char *)(str1 + i));
		}
		i++;
	}
	return (NULL);
}
