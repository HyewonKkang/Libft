/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:03:44 by hykang            #+#    #+#             */
/*   Updated: 2022/01/25 17:32:10 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalSize;
	void	*ptr;

	totalSize = count * size;
	ptr = malloc(totalSize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalSize);
	return (ptr);
}
