#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	res = ft_substr(s1, start, (end - start));
	return (res);
}
