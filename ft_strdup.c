/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 00:19:57 by akajjou           #+#    #+#             */
/*   Updated: 2023/11/12 15:58:40 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_string;

	i = ft_strlen(s) + 1;
	new_string = (char *)malloc(i * sizeof(char));
	if (new_string == NULL)
	{
		return (0);
	}
	ft_memcpy(new_string, s, i);
	return (new_string);
}
