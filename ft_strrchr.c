#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	s = s + len;
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
