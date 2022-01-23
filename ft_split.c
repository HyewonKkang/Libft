#include "libft.h"

int		count_words(char const *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

char	*malloc_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while(s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while(s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**free_all_array(char **s)
{
	int		i;

	i = 0;
	while(s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return NULL;
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return NULL;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(res[i++] = malloc_word(s, c)))
				return (free_all_array(res));
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}
