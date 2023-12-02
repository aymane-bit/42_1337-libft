/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:46:49 by akajjou           #+#    #+#             */
/*   Updated: 2023/12/01 18:15:50 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_array;

	if (size > 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	new_array = (void *)malloc(nmemb * size);
	if (new_array == NULL)
	{
		return (NULL);
	}
	ft_bzero(new_array, (nmemb * size));
	if (new_array == NULL)
	{
		return (NULL);
	}
	return (new_array);
}
