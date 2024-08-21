#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1024
#endif

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
	else
		return (NULL);
}

char	*ft_substr(const char *s, size_t start, size_t len)
{
	size_t		sub_len;
	size_t		i;
	char	*sub;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		sub_len = ft_strlen(s) - start;
	else
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

char	*extract_line(char **remainder)
{
	size_t		len;
	char	*line;
	char	*new_remainder;

	len = 0;
	while ((*remainder)[len] && (*remainder)[len] != '\n')
		len++;
	line = ft_substr(*remainder, 0, len + 1);
	if (!line)
		return (NULL);
	
	if ((*remainder)[len] == '\n')
		new_remainder = ft_strdup(*remainder + len + 1);
	else
		new_remainder = NULL;
	if (!new_remainder && (*remainder)[len] == '\n')
	{
		free(line);
		return (NULL);
	}
	free(*remainder);
	*remainder = new_remainder;
	return (line);
}

char	*ft_read_and_join(int fd, char *remainder)
{
	char	*buffer;
	ssize_t		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (remainder)
			remainder = ft_strjoin(remainder, buffer);
		else
			remainder = ft_strdup(buffer);
		if (!remainder)
			return (free(buffer), NULL);
		if (ft_strchr(remainder, '\n'))
			break;
	}
	free(buffer);
	if (bytes_read < 0)
		return (NULL);
	else
		return (remainder);
}

char	*get_next_line(int fd)
{
	static char	*remainder = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remainder = ft_read_and_join(fd, remainder);
	if (!remainder)
		return (NULL);
	return (extract_line(&remainder));
}

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;


	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	if (close(fd) < 0)
	{
		perror("Error closing file");
		return (1);
	}
	return (0);
}
