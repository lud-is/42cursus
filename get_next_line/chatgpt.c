#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1024
#endif

static size_t ft_strlen(const char *s) {
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}

static char *ft_strjoin(char *s1, char *s2) {
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *new_str = malloc(len1 + len2 + 1);
    if (!new_str) {
        free(s1);
        return NULL;
    }
    for (size_t i = 0; i < len1; i++)
        new_str[i] = s1[i];
    for (size_t j = 0; j < len2; j++)
        new_str[len1 + j] = s2[j];
    new_str[len1 + len2] = '\0';
    free(s1);
    return new_str;
}

static char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s);
    char *dup = malloc(len + 1);
    if (!dup)
        return NULL;
    for (size_t i = 0; i <= len; i++)
        dup[i] = s[i];
    return dup;
}

static char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    return (c == '\0') ? (char *)s : NULL;
}

static char *ft_substr(const char *s, size_t start, size_t len) {
    if (start >= ft_strlen(s))
        return ft_strdup("");
    size_t sub_len = (start + len > ft_strlen(s)) ? ft_strlen(s) - start : len;
    char *sub = malloc(sub_len + 1);
    if (!sub)
        return NULL;
    for (size_t i = 0; i < sub_len; i++)
        sub[i] = s[start + i];
    sub[sub_len] = '\0';
    return sub;
}

static char *extract_line(char **remainder) {
    size_t len = 0;
    while ((*remainder)[len] && (*remainder)[len] != '\n')
        len++;
    char *line = ft_substr(*remainder, 0, len + 1);
    if (!line)
        return NULL;
    char *new_remainder = (*remainder)[len] == '\n' ? ft_strdup(*remainder + len + 1) : NULL;
    if (!new_remainder && (*remainder)[len] == '\n') {
        free(line);
        return NULL;
    }
    free(*remainder);
    *remainder = new_remainder;
    return line;
}

static char *ft_read_and_join(int fd, char *remainder) {
    char *buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return NULL;
    ssize_t bytes_read;
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) {
        buffer[bytes_read] = '\0';
        remainder = remainder ? ft_strjoin(remainder, buffer) : ft_strdup(buffer);
        if (!remainder) {
            free(buffer);
            return NULL;
        }
        if (ft_strchr(remainder, '\n'))
            break;
    }
    free(buffer);
    return (bytes_read < 0) ? NULL : remainder;
}

char *get_next_line(int fd) {
    static char *remainder = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    remainder = ft_read_and_join(fd, remainder);
    if (!remainder)
        return NULL;
    return extract_line(&remainder);
}

int main(int argc, char **argv) {
    if (argc != 2)
        return 1;
    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }
    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        printf("%s", line);
        free(line);
    }
    if (close(fd) < 0) {
        perror("Error closing file");
        return 1;
    }
    return 0;
}
