#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
    size_t  len = 0;
    while (s[len])
        len++;
    return (len);
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *new_str;
    size_t  i = 0, j = 0;
    size_t  len1 = ft_strlen(s1);
    size_t  len2 = ft_strlen(s2);

    new_str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!new_str)
    {
        free(s1);
        return (NULL);
    }
    while (i < len1)
    {
        new_str[i] = s1[i];
        i++;
    }
    while (j < len2)
    {
        new_str[i + j] = s2[j];
        j++;
    }
    new_str[i + j] = '\0';
    free(s1);
    return (new_str);
}

char    *ft_strdup(const char *s)
{
    size_t  len = ft_strlen(s);
    char    *dup = malloc(len + 1);
    if (!dup)
        return (NULL);
    for (size_t i = 0; i <= len; i++)
        dup[i] = s[i];
    return (dup);
}

char    *ft_strchr(const char *s, int c)
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

char    *ft_substr(const char *s, size_t start, size_t len)
{
    size_t  sub_len = ft_strlen(s) - start;
    char    *sub;

    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (sub_len > len)
        sub_len = len;
    sub = malloc(sub_len + 1);
    if (!sub)
        return (NULL);
    for (size_t i = 0; i < sub_len; i++)
        sub[i] = s[start + i];
    sub[sub_len] = '\0';
    return (sub);
}
