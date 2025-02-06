/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:55:52 by ccamaras          #+#    #+#             */
/*   Updated: 2025/02/06 17:57:50 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	joined_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		joined_str[i++] = s2[j++];
	joined_str[i] = '\0';
	return (joined_str);
}

char	*update_position(int fd, char *current_line)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (free(current_line), NULL);
	bytes_read = 1;
	while (!ft_strchr(current_line, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(current_line), NULL);
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(current_line, buffer);
		free(current_line);
		current_line = temp;
		if (!current_line)
			return (free(buffer), NULL);
	}
	return (free(buffer), current_line);
}

char	*get_next_line(int fd)
{
	static char	*current_line = NULL;
	char		*line;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	current_line = update_position(fd, current_line);
	if (!current_line)
		return (NULL);
	if (!*current_line)
		return (free(current_line), current_line = NULL, NULL);
	line = ft_strdup(current_line);
	if (!line)
		return (free(current_line), current_line = NULL, NULL);
	if (ft_strchr(current_line, '\n'))
	{
		temp = ft_strdup(ft_strchr(current_line, '\n') + 1);
		free(current_line);
		current_line = temp;
		if (!current_line)
			return (free(line), NULL);
		return (line[ft_strlen(line) - ft_strlen(current_line)] = '\0', line);
	}
	else
		return (free(current_line), current_line = NULL, line);
}
