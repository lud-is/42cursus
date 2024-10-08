#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int			fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc > 2)
		return (1);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			perror("Error opening file");
			return (1);
		}
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n");
	if (fd != 0 && close(fd) < 0)
	{
		perror("Error closing file");
		return (1);
	}
	return (0);
}
