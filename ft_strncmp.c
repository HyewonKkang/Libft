#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t	i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (!ptr1[i] || !ptr2[i] || ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
