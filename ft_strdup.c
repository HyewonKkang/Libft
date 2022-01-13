#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
