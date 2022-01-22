#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		start++;
	}
	end = ft_strlen(s1);
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	res = ft_substr(s1, 0, (end - start + 1));
	return (res);
}
