#include "libft.h"

int		count_words(char *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
	}
	return (cnt);
}

char	*malloc_word(char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while(s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
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
		while (*s == c)
			s++;
		if (*s != c)
		{
			if (!(res[i++] = malloc_word(s, c)))
				return (free_all_array(res));
			res[i++] = malloc_word(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = '\0';
	return (res);
}
