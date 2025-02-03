/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:55:52 by ccamaras          #+#    #+#             */
/*   Updated: 2025/01/28 14:58:12 by ccamaras         ###   ########.fr       */
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

char	*ft_strjoin(char *crl, char *s2)
{
	char	*joined_str;
	size_t	i;
	size_t	j;

	if (!s2)
		return (free(s2), NULL);
	joined_str = malloc(sizeof(char) * (ft_strlen(crl) + ft_strlen(s2) + 1));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (crl && crl[i])
	{
		joined_str[i] = crl[i];
		i++;
	}
	j = 0;
	while (s2[j])
		joined_str[i++] = s2[j++];
	joined_str[i] = '\0';
	free(crl);
	return (joined_str);
}

char	*update_position(int fd, char *current_line)
{
	char	*buffer;
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
		if (bytes_read >= 0)
			buffer[bytes_read] = '\0';
		current_line = ft_strjoin(current_line, buffer);
		if (!current_line)
			return (free(buffer), free(current_line), NULL);
	}
	free(buffer);
	return (current_line);
}

char	*get_next_line(int fd)
{
	static char	*current_line = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	current_line = update_position(fd, current_line);
	if (!current_line || !*current_line)
		return (NULL);
	line = ft_strdup(current_line);
	if (!line)
		return (free(current_line), NULL);
	if (ft_strchr(current_line, '\n'))
	{
		current_line = ft_strdup(ft_strchr(current_line, '\n') + 1);
		if (!current_line)
			return (free(line), NULL);
		line[ft_strlen(line) - ft_strlen(current_line)] = '\0';
	}
	else
	{
		free(current_line);
		current_line = NULL;
	}
	return (line);
}
