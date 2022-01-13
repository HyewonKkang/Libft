#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	new_dst = dst;
	new_src = (unsigned char *)src;
	while (len--)
		*(new_dst + len) = *(new_src + len);
	return (dst);
}
