#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t		i;
	size_t		j;

	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
	{
		free(s1);
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
    while (j < ft_strlen(s2))
	{
		new_str[ft_strlen(s1) + j] = s2[j];
		j++;
	}
	new_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (new_str);
}

char	*ft_strdup(const char *s)
{
	size_t		len;
	size_t		i;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(const char *s, size_t start, size_t len)
{
	size_t		sub_len;
	size_t		i;
	char	*sub;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_len = ft_strlen(s) - start;
	if (sub_len > len)
		sub_len = len;
	sub = malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[sub_len] = '\0';
	return (sub);
}
