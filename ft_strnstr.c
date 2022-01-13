#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t needleLen;

	i = 0;
	needleLen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j])
			{
				if (haystack[i + j] != needle[j])
					break;
				if (j == needleLen)
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
