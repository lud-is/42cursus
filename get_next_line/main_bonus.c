#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		*fd;
	char	*line;
	int		i;
	int		files_opened;
	int		active_files;

	if (argc < 2)
	{
		printf("Usage: %s <file1> <file2> ... <fileN>\n", argv[0]);
		return (1);
	}

	// Allocate memory for file descriptors
	fd = malloc(sizeof(int) * (argc - 1));
	if (!fd)
	{
		perror("Error allocating memory");
		return (1);
	}

	// Open all files
	files_opened = 0;
	i = 1;
	while (i < argc)
	{
		fd[i - 1] = open(argv[i], O_RDONLY);
		if (fd[i - 1] < 0)
		{
			perror("Error opening file");
			fd[i - 1] = -1;  // Mark as an invalid file descriptor
		}
		else
			files_opened++;
		i++;
	}

	if (files_opened == 0)
		return (free(fd), 1);

	// Round-robin reading from all open file descriptors
	active_files = files_opened;
	while (active_files > 0)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (fd[i] < 0)  // Skip if the file descriptor is invalid
			{
				i++;
				continue;
			}

			line = get_next_line(fd[i]);
			if (line)
			{
				printf("File %d: %s", i + 1, line);
				free(line);
			}
			else
			{
				// Close the file descriptor when done and mark it as invalid
				if (close(fd[i]) < 0)
					perror("Error closing file");
				fd[i] = -1;  // Mark this FD as closed
				active_files--;
			}
			i++;
		}
	}
	return (free(fd), 0);
}
