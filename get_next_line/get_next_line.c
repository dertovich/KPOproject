#include "get_next_line.h"

void	vanish(char **buffer)
{
	if (*buffer != NULL)
	{
		free(*buffer);
		buffer = NULL;
	}
}

char	*update_backup(int new_line, char **backup)
{
	char	*next_line;
	char	*ptr;

	ptr = NULL;
	if (new_line <= 0)
	{
		if (**backup == '\0')
		{
			free(*backup);
			*backup = NULL;
			return (NULL);
		}
		next_line = *backup;
		*backup = NULL;
		return (next_line);
	}
	ptr = ft_substr(*backup, new_line, BUFFER_SIZE);
	next_line = *backup;
	next_line[new_line] = 0;
	*backup = ptr;
	return (next_line);
}

char	*reading_line(int fd, char **backup, char *read_line)
{
	ssize_t	reading;
	char	*ptr;
	char	*new_line;

	new_line = ft_strchr(*backup, '\n');
	ptr = NULL;
	reading = 0;
	while (new_line == NULL)
	{
		reading = read(fd, read_line, BUFFER_SIZE);
		if (reading <= 0)
			return (update_backup(reading, backup));
		read_line[reading] = 0;
		ptr = ft_strjoin(*backup, read_line);
		vanish(backup);
		*backup = ptr;
		new_line = ft_strchr(*backup, '\n');
	}
	return (update_backup(new_line - *backup + 1, backup));
}

char	*get_next_line(int fd)
{
	static char	*backup[FILE_DES + 1];
	char		*read_line;
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FILE_DES)
		return (NULL);
	read_line = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (read_line == NULL)
		return (NULL);
	if (!backup[fd])
		backup[fd] = ft_strdup("");
	next_line = reading_line(fd, &backup[fd], read_line);
	vanish(&read_line);
	return (next_line);
}
