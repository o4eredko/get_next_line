/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochered <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:17:51 by yochered          #+#    #+#             */
/*   Updated: 2018/10/31 12:17:52 by yochered         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <string.h>

int main(int ac, char **av)
{
 	char *line;
 	int fd = open(av[1], 0);
 	int fd2 = open(av[2], 0);
 	ac = 0;
 	while (get_next_line(fd, &line) == 1)
 	{
		printf("%s\n", line);
		free(line); 		
 	}
 	free(line); 
 	while (get_next_line(fd2, &line) == 1)
 	{
		printf("%s\n", line);
		free(line); 		
 	}
 	free(line); 
 	close(fd);
 	close(fd2);
	system("leaks test_gnl");
	return (0);
}