#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalSize;
	void	*ptr;

	totalSize = count * size;
	if (!(ptr = malloc(totalSize)))
		return (NULL);
	ft_bzero(ptr, totalSize);
	return (ptr);
}
