/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:08:27 by akajjou           #+#    #+#             */
/*   Updated: 2023/11/12 01:56:56 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tr;
	size_t			i;

	tr = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (tr[i] == (unsigned char)c)
			return (&tr[i]);
		i++;
	}
	return (NULL);
}
