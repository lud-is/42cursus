#include "get_next_line.h"

char    *extract_line(char **remainder)
{
    size_t  len = 0;
    char    *line;
    char    *new_remainder;

    while ((*remainder)[len] && (*remainder)[len] != '\n')
        len++;
    line = ft_substr(*remainder, 0, len + ((*remainder)[len] == '\n'));
    if (!line)
        return (NULL);
    if ((*remainder)[len] == '\n')
        new_remainder = ft_strdup(*remainder + len + 1);
    else
        new_remainder = NULL;
    free(*remainder);
    *remainder = new_remainder;
    return (line);
}

char    *ft_read_and_join(int fd, char *remainder)
{
    char    *buffer;
    ssize_t bytes_read;

    buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    while (bytes_read > 0)
    {
        buffer[bytes_read] = '\0';
        if (remainder)
            remainder = ft_strjoin(remainder, buffer);
        else
            remainder = ft_strdup(buffer);
        if (!remainder)
            return (free(buffer), NULL);
        if (ft_strchr(remainder, '\n'))
            break ;
        bytes_read = read(fd, buffer, BUFFER_SIZE);
    }
    free(buffer);
    if (bytes_read < 0)
        return (NULL);
    return (remainder);
}

char    *get_next_line(int fd)
{
    static char *remainder = NULL;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    remainder = ft_read_and_join(fd, remainder);
    if (!remainder || remainder[0] == '\0')
    {
        free(remainder);
        remainder = NULL;
        return (NULL);
    }
    return (extract_line(&remainder));
}
