/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:05:02 by hykang            #+#    #+#             */
/*   Updated: 2022/01/25 17:31:47 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size < dstsize)
		return (srcsize + size);
	i = 0;
	while (src[i] && dstsize + i + 1 < size)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (srcsize + dstsize);
}
