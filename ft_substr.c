/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:59:15 by akajjou           #+#    #+#             */
/*   Updated: 2023/11/20 01:28:28 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (!s)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	d = (char *)malloc(sizeof(char) * len + 1);
	if (!d)
		return (0);
	ft_strlcpy(d, s + start, len + 1);
	return (d);
}
